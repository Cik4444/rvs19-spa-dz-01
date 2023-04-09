#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;
}

void Cvijet::draw()
{
	
	//background

	sf::RectangleShape background(sf::Vector2f(800, 600));
	background.setFillColor(sf::Color::Cyan);
	background.setPosition(sf::Vector2f(
		window->getSize().x / 2 - background.getSize().x / 2,
		window->getSize().y / 2 - background.getSize().y / 2
	));

	window->draw(background);
	
	//cvijet

	sf::CircleShape circle(30.f);
	circle.setFillColor(sf::Color::Yellow);
	circle.setPosition(sf::Vector2f(
		window->getSize().x / 2 - circle.getRadius(),
		200
	)
	);
	circle.setOutlineThickness(40.f);
	circle.setOutlineColor(sf::Color::Blue);

	window->draw(circle);

	//list
	
	sf::ConvexShape list;
	list.setPointCount(4);
	list.setPoint(0, sf::Vector2f(403.75, 350.f));
	list.setPoint(1, sf::Vector2f(440, 310.f));
	list.setPoint(2, sf::Vector2f(510, 300.f));
	list.setPoint(3, sf::Vector2f(450, 350.f));
	list.setFillColor(sf::Color::Green);
	
	window->draw(list);

	//stabljika

	sf::RectangleShape stabljika(sf::Vector2f(7.5, 200));
	stabljika.setFillColor(sf::Color::Green);
	stabljika.setPosition(sf::Vector2f(
		window->getSize().x / 2 - stabljika.getSize().x / 2,
		300
	));
	
	window->draw(stabljika);

	//zemlja

	sf::RectangleShape zemlja(sf::Vector2f(800, 100));
	zemlja.setFillColor(sf::Color::Green);
	zemlja.setPosition(sf::Vector2f(
		0,
		500
	));

	window->draw(zemlja);

	//sunce

	sf::CircleShape sunce(30.f);
	sunce.setFillColor(sf::Color::Yellow);
	sunce.setPosition(sf::Vector2f(
		20,
		20
	)
	);
	

	window->draw(sunce);
}

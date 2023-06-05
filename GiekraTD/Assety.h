#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Assety: public sf::Drawable
{
public:
	sf::Vector2f pozycja;
	virtual void set_position();

};


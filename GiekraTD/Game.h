#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include "Tower.h"
#include "Enemy.h"
//klasa ktora zarzadza oknem i procesami gry
class Game
{
private:
	void Initwindow();
	void Initvariable();
	sf::RenderWindow* window;
	sf::Event ev;
	sf::VideoMode video;
public:
	//konstruktory / destruktory
	Game();
	virtual ~Game();

	//warunek czy okno dziala
	const bool running() const;
	//deklaracje funkcji
	void render();
	void update();
	void pollevents();


};


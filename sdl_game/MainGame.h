#pragma once

#include <SDL.h>

class MainGame
{
private:
	SDL_Window* _window;
	int _screenWidth;
	int _screenHeight;
public:
	MainGame();
	~MainGame();

	void run();
	void initSystems();
};


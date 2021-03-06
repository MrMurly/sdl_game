#include "MainGame.h"

MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 1024;
	_screenHeight = 720;
}

MainGame::~MainGame()
{
}

void MainGame::run()
{
	initSystems();
}

void MainGame::initSystems()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindow("GameEngine",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}

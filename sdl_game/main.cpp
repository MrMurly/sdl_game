#include "MainGame.h"
#include <iostream>

int main(int argc, char *argv[])
{
	MainGame mainGame;
	mainGame.run();

	std::cout << "Enter any key to quit...";
	int a;
	std::cin >> a;
	return 0;
}
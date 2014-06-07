#include "Player.h"


Player::Player()
{
	/* Default Constructor */
}

Player::Player(int yPos, int xPos)
{
	setCol(0);
	setSymbol('@' | COLOR_PAIR(100) | A_BOLD);
	setXPos(xPos);
	setYPos(yPos);
}


Player::~Player()
{
}

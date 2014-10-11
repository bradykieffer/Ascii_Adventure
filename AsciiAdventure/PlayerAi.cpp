#include "PlayerAi.h"
#include <iostream>

PlayerAi::PlayerAi()
{
}


PlayerAi::~PlayerAi()
{
}

void PlayerAi::onEnter(int& y, int& x, int deltaY, int deltaX, Map& map)
{

	if (y + deltaY < 0 || y + deltaY > map.getMapHeight() - 1)
	{
		/* If we are here then don't add to the height */
		deltaY = 0;
	}


	if (x + deltaX < 0 || x + deltaX > map.getMapWidth() - 1)
	{
		/* If we are here then don't add to the width */

		deltaX = 0;
	}
	
	int tileType = map.getMap()[y + deltaY][x + deltaX];

	if (map.tile.isPassable(tileType))
	{
		y += deltaY;
		x += deltaX;
	}
	else if (tileType == Tile::TILE_WALL)
	{
		dig(y + deltaY, x + deltaX, map);
	}
}

void PlayerAi::dig(int y, int x, Map& map)
{
	std::vector<std::vector<int>> tmp = map.getMap();
	tmp[y][x] = Tile::TILE_ROCK_FLOOR;
	map.setMap(tmp);
}
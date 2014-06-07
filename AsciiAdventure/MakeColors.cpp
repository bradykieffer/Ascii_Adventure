#include "MakeColors.h"


MakeColors::MakeColors()
{
	makeNewCols();
}


MakeColors::~MakeColors()
{
}


void MakeColors::initColors()
{
	/* Players color selection */
	init_pair(COL_PLAYER, COLOR_YELLOW, COLOR_BLACK);

	/* Rock (generic) color selection */
	init_pair(COL_ROCK_FLOOR, COLOR_LIGHT_GREY, COLOR_BLACK);

	/* Tree color selection */
	init_pair(COL_TREE, COLOR_GREEN, COLOR_BLACK);

	/* Wall color selection */
	init_pair(COL_WALL, COLOR_WHITE, COLOR_BLACK);
}

void MakeColors::makeNewCols()
{
	/* param 1     : color name
	* param 2, 3, 4 : rgb content min = 0, max = 1000 */

	/* Light gray color */
	init_color(COLOR_LIGHT_GREY, 500, 500, 500);
}
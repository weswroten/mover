#include "Console.h"

int x = 1;
int y = 1;

char map[10][11] = {
	"##########",
	"#@       #",
    "#        #",
    "#        #",
    "#        #",
    "#        #",
    "##########",
};

Console::Console()
{
}


Console::~Console()
{
}

void Console::Move(int V, int H)
{

	int y2 = y + V;
	int x2 = x + H;

	if(map[y][x2] == ' ')
	{
		map[y][x] = ' ';
		x += H;
		map[y][x] = '@';
}
	if(map[y2][x] == ' ')
	{
		map[y][x] = ' ';
		y +=  V;
		map[y][x] = '@';
	}

}



#include <iostream>
#include "console.h"
#include <Windows.h>
using namespace std; 

bool gamerunning = true;

Console console;

int main()

{
	while (gamerunning){
		
		system("cls");
			
			for(int i = 0; i < 10; i++)
			{
				cout << map[i] << endl;
			}
	if (GetAsyncKeyState(VK_UP))
		console.Move(-1, 0);
	if (GetAsyncKeyState(VK_DOWN))
		console.Move(1, 0);
	if (GetAsyncKeyState(VK_RIGHT))
		console.Move(0, 1);
	if (GetAsyncKeyState(VK_LEFT))
		console.Move(0, -1);
	}
	cin.get();
	return 0;
}


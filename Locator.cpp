#include <Windows.h>
#include <WinUser.h>
#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	while (true)
	{
		POINT mouse;
		GetCursorPos(&mouse);

		std::cout << "[Mouse X : Y] " << mouse.x << " : " << mouse.y << std::endl;
		Sleep(2);
	}
}
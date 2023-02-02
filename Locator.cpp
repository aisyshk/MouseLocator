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

		std::cout << "Mouse X: " << mouse.x << " Mouse Y: " << mouse.y << "\n";

		Sleep(5);
	}
}
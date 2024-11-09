#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
	bool isRunning = true;
	string command;

	while(isRunning)
	{
		cout << "Input command (0 to exit): ";
		cin >> command;
		if(command == string("0"))
		{
			isRunning = false;
		}
	}
}
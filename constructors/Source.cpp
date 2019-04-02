#include <iostream>
#include <Windows.h>
#include<time.h>

using namespace std;


int x;
int y;


void 
int 
int 
void cut()
{
	int remember;
	for (int i = 1; i < 10; i++)
	{
		if (x%i == 0 && y%i == 0)
		{
			remember = i;
		}
		else if (x%y == 0)
		{

			remember = y;
		}
		else if (y%x == 0)
		{
			remember = x;
		}
	}
	x = x / remember;
	y = y / remember;
}
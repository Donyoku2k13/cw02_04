#include <iostream>
#include "fraction.h"
using namespace std;


fraction::fraction() {
	int x = 0;
	int y = 1;
}


void fraction::setX(int a) {
	cout << "enter numerator" << endl;
	x = a;
}
void fraction::setY(int b) {
	cout << "enter denominator" << endl;
	if (b != 0)
	{
		y = b;
	}
	else
		y = 1;
}
void fraction::setDrob(int a, int b) {
	x = a;
	if (b != 0)
		y = b;
	else
		y = 1;
}
void fraction::printDrob() {
	cout << x << " / " << y << " = " << (float)x / y << endl;
}
int fraction::getX() { return x; }
int fraction::getY() { return y; }
void fraction::cut()
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
void fraction::plus(fraction a) {
	x=((a.x*y) + (a.y*y));
	y=a.y*y;
}
void fraction::minus(fraction a) {
	x = (a.x*y)-(a.y*x);
	y = a.y*y;
}
void fraction::multiply(fraction a) {
	x = a.x*x;
	y = a.y*y;
}
void fraction::divide(fraction a) {
	x *= a.y;
	y *= a.x;
}

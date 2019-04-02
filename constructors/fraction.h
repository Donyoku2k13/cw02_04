#ifndef fraction_
#define fraction_



class fraction
{
private:
	int x;
	int y;
public:
	void setX(int a);
	void setY(int b);
	int getX();
	int getY();
	void setDrob(int a, int b);
	void printDrob();
	void cut();
	fraction();
	void plus(fraction a);
	void minus(fraction a);
	void multiply(fraction a);
	void divide(fraction a);
};


#endif
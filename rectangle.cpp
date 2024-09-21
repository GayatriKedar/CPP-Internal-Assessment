/*Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) 
and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area. Length*/

#include<iostream>
using namespace std;
class rectangle
{
	private:
		float l,b;
		
	public:		
	void area(float len,float bred)
	{
      l=len;
      b=bred;
    }
int area()
{
	l*b;
}
};

int main()
{
	rectangle r1,r2;
    r1.area(4,5);
    r2.area(5,8);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

void print(int len, int wth);
void input(int length, int width);


int main()
{
	int length = 10;
	int width = 5;
	print(length,width);
	input(length,width);
	
	return 0;
}

void print(int len,int wth)
{
	cout << "Length :" << len << endl;
	cout << "Width :" << wth  << endl ;
}

void input(int length,int width)
{
	cout << "Length :" << &length << endl;
	cout << "Width :" << &width  << endl;
}
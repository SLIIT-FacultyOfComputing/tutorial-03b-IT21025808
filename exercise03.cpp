#include<iostream>
#include<iomanip>
using namespace std;

struct box
{
	float height;
    float width;
	float length;
		
}box1,box2;

float volume(float height , float width ,float length);
int main ()
{
	float totalVol;
	
	cout << "Enter Box 1 Height : ";
	cin >> box1.height;
	cout << "Enter Box 1 Width : ";
	cin >> box1.width;
	cout << "Enter Box 1 Length : ";
	cin >> box1.length;
	
	cout << endl;
	cout << "Enter Box 2 Height : ";
	cin >> box2.height;
	cout << "Enter Box 2 Width : ";
	cin >> box2.width;
	cout << "Enter Box 2 Length : ";
	cin >> box2.length;
	
	cout << endl;
	
	totalVol = volume(box1.height,box1.width,box1.length) + 
	volume(box2.height,box2.width,box2.length);
	
	cout << "Volume of the Box : "<< fixed << showpoint << setprecision(2) << totalVol << endl;
	
	return 0;
}

float volume(float height , float width ,float length)
{
	int totalVol;
	totalVol = height*width*length;
	return totalVol;	
	
}
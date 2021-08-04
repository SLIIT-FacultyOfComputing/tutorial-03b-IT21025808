#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	float marks[10] = {78.4, 90.6, 45.9, 72.2, 54.4};
	char name[5][120] = {"Ajith","Wimal","Kanthi","Suranji","Kushmitha"};
	
	cout << setw(5)<< "No" << setw(15) <<  "Name" <<setw(10) <<  "Marks" << endl;
	
	
	for(int r=0; r <5 ; r++)
	{
		cout <<setw(5) << r+1;
		cout << setw(15) << name[r];
		cout << setw(10) << fixed << showpoint << setprecision(2)<< marks[r];
		cout << endl;
		
	}
	return 0;
}
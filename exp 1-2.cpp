#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	double mass;
	double density;
	
	cout << fixed << showpoint << setprecision (2) ;
	cout << "enter mass (grams): " ;
	cin >> mass;
	cout << "enter density (g/cm^3): " ;
	cin >> density;
	cout << " " << endl;

	cout << "the volume is : " << (mass/4) / density << " cm^3" ; 

getch();
return 0;
}

#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main ()
{
	int a,b,c,d;
	double sumbox,sumside,sumprem,sumgen;
	double sum;
	
	cout << fixed << showpoint;
	cout << "box ($250)" << endl;
	cout << "sideline ($100)" << endl;
	cout << "premium ($50)" << endl;
	cout << "gen ad ($25)" << endl;
	cout << " " << endl;

	cout << "enter number of box ticket sold: " ;
	cin >> a ;
	sumbox = a*250;
	cout << "box total: $" <<  setprecision (2) << sumbox << endl;
	cout << " " << endl;

	cout << "enter number of sideline ticket sold: " ;
	cin >> b ;
	sumside = b*100;
	cout << "sideline total: $" <<  setprecision (2) << sumside << endl;
	cout << " " << endl;

	cout << "enter number of premium ticket sold: " ;
	cin >> c;
	sumprem = c*50;
	cout << "premium total: $" <<  setprecision (2) << sumprem << endl;
	cout << " " << endl;

	cout << "enter number of gen ad ticket sold: " ;
	cin >> d;
	sumgen = d*25;
	cout << "gen ad total: $" << setprecision (2) << sumgen << endl;
	cout << " " << endl;


	cout << "box ticket sold: " << a << endl;
	cout << "sideline ticket sold: " << b << endl;
	cout << "premium ticket sold: " << c << endl;
	cout << "gen ad ticket sold: " << d << endl;

	sum = (a*250) + (b*100) + (c*50) + (d*25) ;
	cout << " " << endl;
	cout << "total number of sales: $"   << sum ;

	getch();
	return 0;
}
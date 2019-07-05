#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main ()
{
	double balance, payment, d1, d2, interest, ave;

	cout << "enter netBalance: " ;
	cin >> balance;
	cout << "enter payment made: " ;
	cin >> payment ;
	cout<< "enter number of days in billiing cycle: " ;
	cin >> d1;
	cout <<"enter number of days payment is made before billing cycle: " ;
	cin >> d2;
	cout << "enter interest rate (in decimal): " ;
	cin >> interest ;

	ave = (balance*d1) - (payment*d2) / d1;

	cout << "the total interest is: $" << fixed << showpoint << setprecision (3) << ave*interest ;

	getch ();
	return 0;
}

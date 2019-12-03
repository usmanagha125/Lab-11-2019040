#include <iostream>
#include <math.h>
using namespace std;
int power(int base, int exp);
int main()
{
	int b, e;
	cout << "Enter Base: ";
	cin >> b;
	cout << endl;
	cout << "Enter Exponent: ";
	cin >> e;
	cout << endl;

	cout << b << "^" << e << " = " << power(b, e);

	return 0;
}

int power(int base, int exp)
{
	if (exp < 1)
	{
		return 1;
	}
	else
	{
		return base * power(base, exp - 1);
	}
}
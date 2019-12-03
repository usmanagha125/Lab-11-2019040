#include <iostream>
using namespace std;
int fact(int num);
int main()
{
	int num, result;
	cout << "Enter a positive integer: \n";
	cin >> num;
	cout << endl;

	result = fact(num);

	cout << "Sum = " << result;

	return 0;
}

int fact(int num)
{
	if (num < 1)
	{
		return 0;
	}
	else
	{
		return num + fact(num - 1);
	}
}
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int x;
	
	cout << "Enter integer: \n";
	cin >> x;
	
	if (x % 2 == 0)
	cout << "The integer is even. \n";
	if (x % 2 == 1)
	cout << "The integer is odd. \n";
	
	return 0;
}

/* This programs indicates if the integer is a multiple or not
Created by: Enang Emmanuel Eta
Date: 19th May, 2015
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int x, y;
	
	cout << "Enter the two integers. \n";
	cin >> x >> y;
	
	if (x % y == 0)
	cout << "The First is a multiple of the second. \n";
	else
	cout << "The First is not a multiple of the second. \n";
	
	return 0;
}

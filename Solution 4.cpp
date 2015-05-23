/* This programs indicates five digit
Created by: Enang Emmanuel Eta
Date: 19th May, 2015
*/

#include <iostream>

int main(){
	int fivedigit;
	int first, second, third, fourth, fifth;
	
	std::cout << "enter the five digit integer: ";
	std::cin >> fivedigit;
	
	if(fivedigit < 10000)
	{
		std::cout << " Restructured to ";
	}
	
	if(fivedigit > 9999)
	{
		std::cout << "Restructured to ";
	}
	
	first = fivedigit/10000;
	second = (fivedigit/1000)%10;
	third = (fivedigit/100)%10;
	fourth = (fivedigit/10)%10;
	fifth = fivedigit%10;
	
	std::cout << first;
	std::cout << " " << second;
	std::cout << " " << third;
	std::cout << " " << fourth;
	std::cout << " " << fifth;
	
	return 0;
}

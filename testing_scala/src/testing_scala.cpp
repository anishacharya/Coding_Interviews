//============================================================================
// Name        : testing_scala.cpp
// Author      : Anish Acharya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}
int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//int x=0;
	cout<<gcd(15,20)<<endl;
	return 0;
}

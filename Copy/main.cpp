

/*
File:		main.cpp
Author:		Hamza Mian
Date:		February 11, 2019
Brief:		Shows the use of the copy method
*/


#include <vector>
#include <iostream>
#include "copy.hpp"

using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4 };
	vector<int> v2 = cpy::Copy(v);

	v.push_back(5);

	cout << "First vector:" << endl;
	for (auto i : v)
	{
		cout << i << endl;
	}

	cout << "\nSecond vector:" << endl;
	for (auto i : v2)
	{
		cout << i << endl;
	}

}
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

/*
BIG-O(n^2) Selection Sort


Each iteration,find a minimum then swap with according index

*/
int main()
{
	vector<int> num{ 4,3,2,6,1,7 };

	//From front of index to end index
	for (int i = 0; i < num.size()-1; i++)
	{
		//set current minimum index
		int min_index = i;
		//Compare rest of array to find minimum index
		for (int j = i + 1; j < num.size(); j++) {
			if (num[j] < num[min_index]) {
				min_index = j;
			}
		}
		//swap min index element with current element at i
		unsigned int temp = num[i];
		num[i] = num[min_index];
		num[min_index] = temp;
	}

	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}

	string s;
	cin >> s;

	return 0;
}


// MergeSort1.cpp : The first version of merging sort algorithm

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> A = { 5,8,10,12,4,2,6,1,7,0,11,15,9,3,13,14 };
	int N = A.size();
	cout << "Initial sequence:\n";

	// Output initial sequence of numbers to be sorted
	for (int j = 0; j < N; j++)
		cout << A[j] << " ";
		
	// Halt program (add pause to keep window open)
	cout << "\n\n\nPress any key to continue . . .";
	cin.get();
	return 0;
}
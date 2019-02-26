// BloomFilter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"SimpleBloomFilter.h"

using namespace std;
int main()
{
	SimpleBloomFilter bf;
	vector<string> testStrs = {
		"hello worid",
		"worid",
		"rid",
		"hello ",
		"rder positio",
		"d from the right",
		"Returns whethe",
		"signed integra",
		"the bit at",
		"position pos",
		"at position",
	};
	for (int i = 0; i < testStrs.size(); i++) {
		cout << bf.exist(testStrs[i]) << " ";
	}
	for (int i = 0; i < testStrs.size(); i++) {
		bf.set(testStrs[i]);
	}
	for (int i = 0; i < testStrs.size(); i++) {
		cout << bf.exist(testStrs[i]) << " ";
	}
	return 0;
}

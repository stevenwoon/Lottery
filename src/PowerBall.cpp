//============================================================================
// Name        : Test9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include <set>
#include <algorithm>
#include <string.h>

#include <iostream>
using namespace std;

int method1(const int& count) {
	srand(time(0));
	vector<int> whiteBall = { 13, 18, 24, 29, 30, 32, 33, 34, 36, 37, 38, 39, 40,
			41, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
			61, 62, 63, 64, 65, 66, 67, 68, 69 };

	// pick 5 random number
	set<int> randm;
	cout << "Total Number of Numbers to pick from: " << whiteBall.size() << endl;
	for (int i = 0; i < count; ++i) {
		randm.clear();

		while (randm.size() < 5) {
			int r = rand();
			randm.insert(whiteBall[r % whiteBall.size()]);
		}

//	sort(randm.begin(),randm.end());
		for (auto p : randm) {
			cout << p << " ";
		}

		// Now, print the red ball;
		cout << " | " << (rand() % 26) + 1;
		cout << endl;
	}

	return 0;
}

int method2() {
	// Do not pick any numbers 31 or less (days of the month), 35 and 42.
	return 0;
}

int main() {
	method1(10);
	return 0;
}

#include "euler.h"
#include <iostream>

using namespace std;

int multiples() {
	for (int i = 0; i++;) {
		while (
			i % 2520 == 0 &&
			i % 13 == 0 &&
			i % 15 == 0 &&
			i % 17 == 0 &&
			i % 19 == 0) {
				int winner = i;
				cout << "Winner: " << winner << endl;
				return winner;
		}
	}
}

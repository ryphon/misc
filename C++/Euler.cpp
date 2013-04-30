#include "euler.h"
#include <iostream>
#include <cmath>

using namespace std;

int multiples() {
	for (int i = 1; i > 0; i++) {
		i = i + 1;
		if (
			i % 2 == 0 &&
			i % 3 == 0 &&
			i % 4 == 0 &&
			i % 5 == 0 &&
			i % 6 == 0 &&
			i % 7 == 0 &&
			i % 8 == 0 &&
			i % 9 == 0 &&
			i % 10 == 0 &&
			i % 11 == 0 &&
			i % 12 == 0 &&
			i % 13 == 0 &&
			i % 14 == 0 &&
			i % 15 == 0 &&
			i % 16 == 0 &&
			i % 17 == 0 &&
			i % 19 == 0 &&
			i % 19 == 0 &&
			i % 20 == 0) {
				int winner = i;
				cout << "Winner: " << winner << endl;
				return winner;
		}
	}
}

float lrgprimefac() {
	float num = 600851475143;
	for (float i = 1; i > 0; i++) {
		float factor = 0;
		if (fmod(num,i) == 0) {
			factor = i;
		}
		if (is_prime(factor) == true) {
			break;	
		}
	}
}

bool is_prime(float n) {
	for (int i = 2; i <= n; i++) {
		if (fmod(n,i) == 0) {
			return false;
		}
		if (i == n && fmod(i,n) != 0) {
			return true;
		}
	}
}

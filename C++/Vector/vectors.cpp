#include "vectors.h"

using namespace std;

int main() {
	cout << "Hello World" << endl;
	vector<int>digits;
	digits.push_back(3);
	digits.push_back(7);
	digits.push_back(7);
	digits.push_back(6);
	digits.push_back(6);
	digits.push_back(6);
	digits.push_back(8);
	add_area_code(digits, 1, 2, 3);
	display_vector(digits);
}

void display_vector(vector<int> digits) {
	for (int i=0; i<digits.size(); i++) {
		cout << "Digit " << i << digits[i] << endl;
	}
}

void add_area_code(vector<int> digits, int a, int b, int c) {
	digits.insert(digits.begin(), c);
	digits.insert(digits.begin(), b);
	digits.insert(digits.begin(), a);
	cout << "Inside add area code: " << endl;
}

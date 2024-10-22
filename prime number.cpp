#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Input a number: ";
	cin >> n;
	if (n == 2) {
		cout << n << " is prime number. ";
		}
	int count = 0, i = 1;
	while (n >= i) {
		if (n % i == 0) {
			count ++;
		}
		i++;
	}
		if (count == 2) {
			cout << n << " is prime number.";
		}
		else {
			cout << n << " is not a prime number.";
		}
	return 0;
}

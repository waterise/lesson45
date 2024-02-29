#include <iostream>
using namespace std;

int count(int* ve, int leng) {
	int counter = 0;
	for (int i = 0; i < leng; i++) {
		if (*(ve + i) % 2 == 0) {
			counter += *(ve + i);
		}
	}
	cout << counter;
	return counter;
}
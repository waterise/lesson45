#include <iostream>
using namespace std;

void vector(int* v, int length) {
	for (int i = 0; i < length; i++) {
		*(v+ i) = rand() % 100;
	}
	for (int i = 0; i < length; i++) {
		cout << *(v+ i) << " ";
	}

}
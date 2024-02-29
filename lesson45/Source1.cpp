#include <iostream>

using namespace std;
void vector(int* v, int length);
int count(int* ve, int leng);


int main() {
	int size;
	cout << "enter size: ";
	cin >> size;
	int* vect = new int;
	vector(vect,size);
	count(vect, size);
	return 0;
}
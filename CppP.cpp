#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void askScores();
void showScores();

int cals;
int *ptr;

int main(void) {

	askScores();
	showScores();

	delete[] ptr;

	getch();
	return 0;
}

void askScores() {
	cout << "\nIngrese el numero de notas: ";
	cin >> cals;

	cout << "" << endl;

	ptr = new int[cals];

	for (int i = 0; i < cals; i++) {
		cout << "Digite la nota: ";
		cin >> ptr[i];
	}
}

void showScores() {
	cout << "\n\tNotas del alumno\n" << endl;

	for (int i = 0; i < cals; i++) {
		cout << i + 1 << ". " << ptr[i] << endl;
	}
}
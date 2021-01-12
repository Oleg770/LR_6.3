#include <iostream>
#include <iomanip>

using namespace std;

// вивід масива на екран для типу int
void PrintArrayInt(const int* dt, int size)
{
	if (size == 0)return;
	cout << dt[0];
	for (int i = 1; i < size; i++) {
		cout << ", " << dt[i];
	}
	cout << endl;
}

// вивід масива на екран.
// виводить будь-які типи, для яких визначена операція '<<'

template<typename XType>
void PrintArray(XType* dt, int size)
{
	if (size == 0)return;
	cout << dt[0];
	for (int i = 1; i < size; i++) {
		cout << ", " << dt[i];
	}
	cout << endl;
}

void test1()
{
	int data[10];
	for (int i = 0; i < 10; i++)data[i] = rand() % 99;

	PrintArrayInt(data, 10);

}


// генерація одного випадкового числа
// min - мінімальне можливе значення
// max - максимальне можливе значення
int randInt(int min, int max)
{
	int r = rand() % (max - min + 1) + min;
	return r;
}

void test2()
{
	// string type
	string data[10];
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++) {
			data[i] += (char)randInt(65, 90); // A....Z
		}
	PrintArray(data, 10);

	// float type
	float fdt[10];
	for (int i = 0; i < 10; i++) {
		fdt[i] = (float)randInt(-999, 999) / 10.;
	}
	PrintArray(fdt, 10);
}

int main()
{
	test1();

	test2();


	cout << "\n\n"; system("pause"); // нужно для вижул только

	return 0;
}


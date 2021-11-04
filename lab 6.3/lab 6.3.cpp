#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
void Input(T* a, const T size)
{
	for (T i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

template <typename T>

void Print(T* a, const T size)
{
	cout << "a = {";
	for (T i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << "}" << endl;
}

template <typename T>
T Count(T *a, const T size)
{
	T count = 0;
	for (T i = 0; i < size; i++)
	{
		if (a[i] < 0)
			count++;
	}
	return count;
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];

	Input(a, n);
	Print(a, n);

	cout << "count = " << Count(a, n) << endl;

	return 0;
}
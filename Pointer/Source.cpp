#include<iostream>

using namespace std;
int Sum(int a, int b)
{
	return a + b;
}

void Fill(int* a, int* b)
{
	cin >> (*a) >> (*b);
}

void Fill(int a, int b)
{
	cin >> (a) >> (b);
}

void Swap(int* a)
{
	*a = abs(*a);
}
void Fill(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		//*(p + i) = rand() % 20;
		p[i] = rand() % 20;
	}
}

void SumArray(int* A, int* B, int* C, int size)
{

}
void Dob(int& a, int& b, int& c, int& rez)
{

}
void main()
{
	//int const SIZE = 5;
	//int arr[SIZE], arr1[SIZE], arr2[SIZE];
	//Fill(arr, SIZE);
	//Fill(arr1, SIZE);
	int a = 10, b = 5, c = 5, rez = 0;
	Dob(a, b, c, rez);
	cout << rez << endl;


	int* pa;//Створення
	pa = &a;//Запис адреси

	//cout << *pa << endl;//Значення у памяті
	//cout << pa << endl;//Адреса на яку вказує вказівник
	int& ref = a;
	cout << "ref=" << &ref << endl;
	cout << "a=" << &a << endl;
	cout << "a=" << a << endl;
	ref = 20;
	cout << "pa=" << &pa << endl;
	cout << "a=" << a << endl;
	cout << "pa=" << pa << endl;

	/*cout << &ref << endl;
	ref = b;

	cout << &ref << endl;
	cout << "a=" << a << endl;
	ref = 5;
	cout << "a=" << a << endl;*/



	/*int b = 0;
	Fill(a, b);
	cout << "a=" << a << endl << "b=" << b << endl;
	cout << "Sum=" << Sum(a, b) << endl;*/

}
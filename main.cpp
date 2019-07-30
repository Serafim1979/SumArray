#include<iostream>
/////////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////////
template <typename T>
int sum_array(T arr[], int n);

template <typename T>
int sum_array(T * arr[], int n);
/////////////////////////////////////////////
struct debts
{
	char name[50];
	double amount;
};
/////////////////////////////////////////////
int main()
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 24000.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Sum of things: " << sum_array(things, 6);
	cout << "\nSum of debts: " << sum_array(pd, 3);
	cout << endl;
	system("pause");
	return 0;
}
/////////////////////////////////////////////
template <typename T>
int sum_array(T arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}
/////////////////////////////////////////////
template <typename T>
int sum_array(T * arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}
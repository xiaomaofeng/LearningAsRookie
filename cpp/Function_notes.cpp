#include<algorithm>
#include<string>
#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

void display(int a)
{
	cout << a << endl;
}
void InsertSort(int a[])
{
	
	for (int i = 0; i <6; i++)
	{
		/*for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		{
			cout << a[i] << endl;
		}*/
		//int index = i;
		int item_i = a[i];
		cout << *a ;
		cout << sizeof(a);
		cout << item_i << endl;
	/*	while (index > 0 && a[index - 1] > item_i)
		{
			a[index] = a[index - 1];
			index -= 1;
		}*/
		//a[index] = item_i;
	}
}

int main() {
	int a[6] = { 9,5,3,1,8,7 };
	int x = sizeof(a);
	InsertSort(a);
	getchar();

	return 0;
}
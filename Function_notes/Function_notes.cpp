// Function_notes.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"Common.h"
#include<fstream>
#include<windows.h>
using namespace std;


template<class T>void swap(T&a, T&b)
{
	T temp;
	temp= a;
	a = b;
	b = temp;
}


//WIN32_FIND_DATA ff;
//bool bdirectory = (ff.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY);


//void swap(T&a,)
int main()
{
	string Suffix;
	string FileName = "C:\\Users\\Joe\\Desktop\\test\\DBR_T_DEFULT_20181029110322_original.txt";
	Suffix=GetSuffix(FileName);
	cout << Suffix << endl;
	system("pause");
}


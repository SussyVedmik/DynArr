#include "DArr.h"
#include <iostream>
#include<Windows.h>

DArr::DArr() :ptr(nullptr), size(0)
{}

DArr::DArr(int s)
{
	size = s;
	ptr = new int[s] {0};
}

DArr::DArr(const DArr& a)
{
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}

DArr::~DArr()
{
	if (ptr != 0)
	{
		delete[] ptr;
	}
	Sleep(1000);
}

void DArr::Input()
{
	//srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}

void DArr::Output() const
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << "\t";
	}
	cout << "\n---------------------------------\n";
}

int* DArr::GetPointer() const
{
	return ptr;
}

int DArr::GetSize() const
{
	return size;
}

void DArr::ReSize(int s)
{
	if (size != s) {
		int* newPointer = new int[s];

		for (int i = 0; i < size; i++) {
			newPointer[i] = ptr[i];
		}
		for (int i = size; i < s; i++) {
			newPointer[i] = 0;
		}

		delete[] ptr;
		ptr = newPointer;
		size = s;
	}
	else {
		cout << "Array sized" << endl;
	}
}

void DArr::Sort()
{
	for (int i = 1; i < size; i++) {
		int b = ptr[i];
		int j = i - 1;

		while (j >= 0 && ptr[j] > b) {
			ptr[j + 1] = ptr[j];
			j = j - 1;
		}
		ptr[j + 1] = b;
	}
}

int DArr::Search(int a)
{
	for (int i = 0; i < size; i++) {
		if (ptr[i] == a) {
			return i;
		}
	}
	return -1;
}

void DArr::Reverse()
{
	int firstI = 0;
	int secondI = size - 1;

	while (firstI < secondI) {
		int buff = ptr[firstI];
		ptr[firstI] = ptr[secondI];
		ptr[secondI] = buff;
		firstI++;
		secondI--;
	}
}


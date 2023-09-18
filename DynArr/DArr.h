#pragma once
#include <iostream>
using namespace std;
class DArr
{
	int* ptr;
	int size;

public:
	DArr();
	DArr(int);
	DArr(const DArr&);
	~DArr();
	void Input();
	void Output() const;
	int* GetPointer() const;
	int GetSize() const;
	void ReSize(int s);
	void Sort();
	int Search(int a);
	void Reverse();
};


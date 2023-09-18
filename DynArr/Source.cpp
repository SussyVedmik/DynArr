#pragma once
#include "DArr.h"

DArr GetObj()
{
	DArr obj(3);
	obj.Input();
	return obj;
}

void main()
{
	DArr a(5);
	a.Input();
	a.Output();
	int Index = a.Search(1);
	cout << "Index = " << Index << endl;
	a.Sort();
	a.Output();
	a.Reverse();
	a.Output();
	a.ReSize(10);
	a.Input();
	a.Output();
	system("pause");
}
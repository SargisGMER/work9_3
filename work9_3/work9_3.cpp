#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int func(int num);
int main()
{
	int x = func(0x70000000), val1;
	cout << "0x70000000 ->" << x << endl;

	cout << "input number" << endl;
	cin >> val1;

	val1 = val1 - pow(2, func(val1));
	cout << "new number" << endl<< val1<< endl;

	system("pause");
    return 0;
}

int func(int num) {
	int left = 32, i;
	unsigned mask = 0x80000000;
	for (i = 1; i <= 32 ; i++)
	{
		if ((mask & num ) != 0 )
		{
			left = i;
			break;
		}
		mask = mask >> 1;
	}
	left = 32 - left;
	return left;
}
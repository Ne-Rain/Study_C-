#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

const int aa = 10;//没有内存

void test01()
{
	cout << "aa = " << aa << endl; //cout << "aa" << 10 << endl;

	//禁止优化volatile
	volatile const int bb = 20;
	int* p = (int*)&bb;
	*p = 200;
	cout << "bb = " << bb << endl;
	cout << "*p = " << *p << endl;
}

int main()
{
	test01();

	extern const int c;
	cout << c << endl;
	system("pause");
	return EXIT_SUCCESS;
}

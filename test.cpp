#include <iostream>
#include <string>
using namespace std;

int main()
{

    // int a = 10;
    // cout << "a = 哈哈\thellworld" << a << endl;
    // cout << "a = 哈哈\thellworld" << a << endl;
    // cout << "a = 哈哈\thellworld" << a << endl;
    // cout << "short所占的内存空间是多少" << sizeof(short) << endl;
    // string str = "hello world";
    // cout << str << endl;
    int a = 10;
    int *p = &a;
    // cout << "请输入一个整数" << endl;
    // cin >> a;
    // cout << "a = " << a << endl;
	cout << &a << endl; //打印数据a的地址
	cout << p << endl;  //打印指针变量p
    cout << "*p = " << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;
    return 0;
}

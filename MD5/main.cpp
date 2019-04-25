#include <iostream>
#include "MD5.h"
using namespace std;
int main(void)
{
	string input, output;
	cout << "输入一个字符串：" << endl;
	cin >> input;
	MD5 md5;
	md5.update(input);
	output = md5.toString().c_str();
	cout << output << endl;
	system("pause");
}
//使用方法
//MD5 md5;
//md5.update(input);
//output = md5.toString().c_str();
#include <iostream>
#include "MD5.h"
using namespace std;
int main(void)
{
	string input, output;
	cout << "����һ���ַ�����" << endl;
	cin >> input;
	MD5 md5;
	md5.update(input);
	output = md5.toString().c_str();
	cout << output << endl;
	system("pause");
}
//ʹ�÷���
//MD5 md5;
//md5.update(input);
//output = md5.toString().c_str();
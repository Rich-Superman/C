#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;
//创建类
class yuan
{
public:
	int r;
	double c()
	{
		return 2 * pi * r;
	}
};
int main()
{
	//创建对象
	yuan p;
	p.r = 10;
	cout << "圆的周长为：" << p.c() << endl;
	system("pause");
	return 0;
}
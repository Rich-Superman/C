#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;
//������
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
	//��������
	yuan p;
	p.r = 10;
	cout << "Բ���ܳ�Ϊ��" << p.c() << endl;
	system("pause");
	return 0;
}
// program.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	void setfeet(int f);
	void setinches(int ich);
	void display();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int ich)
{
	inches = ich % 12;
	feet = feet + ich / 12;
}
void CFeet::display()
{
	cout << "����  " << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet :public CFeet
{
public:
	void display();
};
void CMyfeet::display()
{
	cout << "������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}

int main()
{
	CFeet Afeet;
	Afeet.setfeet(3);
	Afeet.setinches(8);
	Afeet.display();
	return 0;
}

// program.cpp : 定义控制台应用程序的入口点。
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
	virtual void display();
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
	cout << "基类  " << feet << "英尺" << inches << "英寸" << endl;
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
	cout << "派生类   " << feet << "英尺" << inches << "英寸" << endl;
}

int main()
{
	CFeet *p;
	p = new CMyfeet;
	p->setfeet(3);
	p->setinches(8);
	p->display();
	p->CFeet::display();
	return 0;
}

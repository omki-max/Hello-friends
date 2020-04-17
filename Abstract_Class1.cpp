/*#include<iostream>
using namespace std;
class person
{
public:
	virtual void performDuties()=0;
    void walk()
	{
		cout<<endl<<"Walk"<<endl;
	}
	void talk()
	{
		cout<<endl<<"Talk"<<endl;
	}
	void eat()
	{
		cout<<endl<<"Eat"<<endl;
	}
	void sleep()
	{
		cout<<endl<<"Sleep"<<endl;
	}
};
class soldier:public person
{
public:
	void performDuties()
	{
		cout<<endl<<"Go on a War"<<endl;
	}
};
class teacher:public person
{
public:
	void performDuties()
	{
		cout<<endl<<"To teach students"<<endl;
	}
};
class cricketer:public person
{
public:
	void performDuties()
	{
		cout<<endl<<"To play cricket"<<endl;
	}
};
void perform(person *p)
{
	p->performDuties();
}
void main()
{
      perform(new soldier);
	  perform(new teacher);
}*/

#include<iostream>
using namespace std;
class Y;
class X{
	int a;
	public:
		void seta(int val1)
		{
			a=val1;
		}
		void display()
		{
			cout<<"X = "<<a<<endl;
		}
	friend void exchange(X &,Y &);	
};
class Y{
	int b;
	public:
		void setb(int val2)
		{
			b=val2;
		}
		void display()
		{
			cout<<"Y = "<<b<<endl;
		}
		friend void exchange(X &,Y &);	//ta kih nichy func may hum &x ko use kr sky;
};
void exchange(X & x,Y & y)//class X may &x ky through a=12 ajaye ga
{
	int temp=x.a;
	x.a=y.b;
	y.b=temp;
}
int main()
{
	X a;
	Y b;
	a.seta(12);
	b.setb(34);
	cout<<"Before : "<<endl;
	a.display();
	b.display();
	exchange(a,b);
	cout<<"After : "<<endl;
	a.display();
	b.display();
}

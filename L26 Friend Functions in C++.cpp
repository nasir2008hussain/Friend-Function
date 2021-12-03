#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		void set(int v1,int v2)
		{
			a=v1;
			b=v2;
		}
		void print()
		{
			cout<<a<<" + "<<b<<"i"<<endl;
		}
		friend complex sumcomplex(complex o1,complex o2);
};
complex sumcomplex(complex o1,complex o2)
{
	complex o3;
	o3.set((o1.a+o2.a),(o1.b+o2.b));
	return o3;
	
}
int main()
{
	complex s1,s2,sum;
	s1.set(1,3);
	s1.print();
	s2.set(4,5);
	s2.print();
	sum=sumcomplex(s1,s2);
	sum.print();
}

#include<iostream>
using namespace std;
class complex;//forward declaration ta kih pta chly kih yeh agay aye ga 
class calculator{
	public:
		
		
		int real(complex,complex);
		int img(complex,complex);
};
class complex{
	int a,b;
	//ab surf ek func ko bnaw ya puri class ko bnaw yh depend krta hy
	//friend class calculator to ab nichy func ko alg alg lkhny ki zrort nhi rhy gi;
	friend int calculator::real(complex,complex);
	friend int calculator::img(complex,complex);
	public:
		void set(int v1,int v2)
		{
			a=v1;
			b=v2;
		}
		void show()
		{
			cout<<"Sum : "<<a<<" + "<<b<<"i : ";
		}
};
int calculator::real(complex o1,complex o2)
{
	return (o1.a+o2.a);
}
int calculator::img(complex o1,complex o2)
{
	return (o1.b+o2.b);
}
int main()
{
	complex o1,o2;
	o1.set(1,3);
	o2.set(4,5);
	calculator o3;
	int res=o3.real(o1,o2);
    int rest=o3.img(o1,o2);
    o1.show();
    cout<<endl;
    
    o2.show();
    cout<<endl;
    cout<<"\t"<<res<<"\t"<<rest<<endl;
}

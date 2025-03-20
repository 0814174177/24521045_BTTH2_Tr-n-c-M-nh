#include<bits/stdc++.h>
#define ll long long
using namespace std;
class SoPhuc{
	private:
		double thuc;
		double ao;
	public:
		void in();
		SoPhuc Plus(SoPhuc a, SoPhuc b)
		{
			SoPhuc c;
			c.thuc=a.thuc+b.thuc;
			c.ao=a.ao+b.ao;
			return c;
		}
		SoPhuc Subtraction(SoPhuc a, SoPhuc b)
		{
			SoPhuc c;
			c.thuc=a.thuc-b.thuc;
			c.ao=a.ao-b.ao;
			return c;
		}
		SoPhuc Multiplication(SoPhuc a, SoPhuc b)
		{ 
			SoPhuc c;
			c.thuc=a.thuc*b.thuc-a.ao*b.ao;
			c.ao=a.thuc*b.ao+a.ao*b.thuc;
			return c;
		}
		SoPhuc divide(SoPhuc a, SoPhuc b)
		{
			SoPhuc c;
			c.thuc=(a.thuc*b.thuc+a.ao*b.ao)/(b.thuc*b.thuc+b.ao*b.ao);
			c.ao=(a.ao*b.thuc-a.thuc*b.ao)/(b.thuc*b.thuc+b.ao*b.ao);
			return c;
		}
		void out();
};
void SoPhuc::in(){  
	cin>>thuc>>ao;
}
void SoPhuc::out(){
	cout<<"("<<thuc<<","<<ao<<")"<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	SoPhuc Number_1,Number_2,Number;
	Number_1.in();
	Number_2.in();
		Number=Number.Plus(Number_1,Number_2);
			Number.out();
		Number=Number.Subtraction(Number_1,Number_2);
			Number.out();
		Number=Number.Multiplication(Number_1,Number_2);
			Number.out();
		Number=Number.divide(Number_1,Number_2);
			Number.out();
	return 0;
}

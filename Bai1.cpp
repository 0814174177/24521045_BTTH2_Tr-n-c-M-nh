
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
class Time{
	private:
		ll day=0;
		ll month=0;
		ll year=0;
	public:
		// set-get
		ll getDay() const{return day;}
		ll getMonth() const{return month;}
		ll getYear() const{return year;}
		void setDay(ll day){this->day=day;}
		void setMonth(ll month){this->month=month;}
		void setYear(ll year){this->year=year;}
		// contructor
		Time() {}
		Time(ll day, ll month, ll year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		// in-out
		void in();
		void out();
		// function
		bool Leap_Year();
		bool Accept();
		// Search_day
};
bool Time::Leap_Year(){
	if((year%100!=0 && year%4==0) || (year%400==0)) return true;
	return false;
}
bool Time::Accept(){
	if(Leap_Year()==1) a[2]=29;
	if(month<1 || month>12) return false;
	if(day<1 || day>a[month]) return false;
	return true;
}
void Time::in(){
	cin>>day>>month>>year;
	while(Accept()!=true){
		cout<<"Wrong form, in Again";
		cin>>day>>month>>year;
	}
}
void Time::out(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
void Next_day(Time x){
	Time y;
	y.setDay(x.getDay()+1);
	y.setMonth(x.getMonth());
	y.setYear(x.getYear());
	if(y.Accept()==1) y.out();
		else{ // ngay da vuot qua muc
			y.setDay(1);
			y.setMonth(y.getMonth()+1);
			if(y.Accept()==1){
				y.out();
				return;
			}
				else{ // thang khong hop le
					y.setYear(y.getYear()+1);
					y.setMonth(1);
					y.out();
				}
		}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Time x;
	x.in();
	Next_day(x);
	return 0;
}
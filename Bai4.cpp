#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll N=1e5+5;
ll local=0; // van tiep tuc
class sTime{
	private:
		ll minute;
		ll hour;
        ll s;
	public:
		void in(){ cin>>hour>>minute>>s;}
        void out(){ cout<<hour<<":"<<minute<<":"<<s<<endl; }
		ll getHour() const { return hour; }
		ll getMinute() const { return minute; }
        ll getS() const { return s; }
        void setHour(ll hour) { this->hour=hour; }
        void setMinute(ll minute) { this->minute=minute; }
        void setS(ll s) { this->s=s; }
		void Accept(){ // gio hop le
			if(minute<0 || minute>=60){
                cout<<"Wrong form_Minute"<<flush;
                local=-1;
                return;
            }
			if(hour<0 || hour>23){
                cout<<"Wrong form_Hour"<<flush;
                local=-1;
                return;
            }
            if(s<0 || s>=60){
                cout<<"Wrong form_Second"<<flush;
                local=-1;
                return;
            }
		}
        void Bonus_time(ll bonus);
};
void sTime::Bonus_time(ll bonus){
    ll Real=minute*60+hour*3600+s+bonus;
    hour=Real/3600;
    Real=Real%3600;
    minute=Real/60;
    Real=Real%60;
    s=Real;
    out();
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    sTime x;
    x.in();
    x.Accept();
    if(local==0){
        ll bonus;
        cout<<"Enter bonus(s): "<<flush;;
        cin>>bonus;
        x.Bonus_time(bonus);
    }
    return 0;
}
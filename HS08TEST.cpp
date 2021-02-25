#include<bits/stdc++.h>
using namespace std;
int main() {
int withdraw;
float bal;
cin>>withdraw>>bal;
if(bal<withdraw)
cout<<bal;
else if(withdraw%5!=0 || (withdraw+0.5)>bal)
cout<<fixed<<setprecision(2)<<bal;
else {
cout<<fixed<<setprecision(2)<<bal-withdraw-0.50;
}
return 0;
}

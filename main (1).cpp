#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a>=0&&b>=0){
        cout<<"both are positiv";
    }
     if (a<0&&b<0){
         cout<<"both are negative";
}
if (a==0&&b==0){
    cout<<"both are zero";
}
if(a>b){
    cout <<"a is bigger";
}
else{
    cout <<"b is bigger ";
}
if(a>=0){
    cout<<"a is positive";
}
else{
    cout<<"b is negative";
}
return 0;
}
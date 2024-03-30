#include<iostream>
using namespace std;
int main (){
    // operators case // right to left associativity
    
    int p=5,q=10;
    p += q -= p;   //  here right to left jaata h , yaad rakho
    cout<<p<<" "<<q<<endl;  // p--> 10 , q--> 5

    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j; // 0
    l=j/i*i; // 2
    a=i/j*j; // 0
    b=j/i*i; // 2
    cout<<k<<" "<<l<<" "<<a<<" "<<b<<endl;

    int n =5;
    int r=2;
    cout<<++n*r--<<endl;

    char ch='9';
    int num = ch -'0';
    cout<<num<<endl;  //--> 9

    int num1=10;
    int num2=++num1+num1--;
    cout << num2;


}
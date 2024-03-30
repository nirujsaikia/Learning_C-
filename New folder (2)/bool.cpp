#include<iostream>
using namespace std;
int main(){
    bool p=false;
    bool q=false;
    bool r=true;
    cout<<(p==q==r);

    bool p=false;
    bool q=false;
    bool r=true;
    cout<<(p==q==r);
    int a=1;
    int b=2;
    int c=2;
    cout<<(a==b==c); //(a==b)==(c) -> (0)==(2) -> 0
    // if (a)==(b==c) -> (1)==(1) -> 1
}
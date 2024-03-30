#include<iostream>
using namespace std;
int main (){
    // int , bool ,float , char --> can  typecast
    float x=5.2;
    cout<<(int)x;
    cout<<(bool)x;
    cout<<(char)x<<endl;

    char chh ='a';
    int z =(int)chh;
    cout<<z<<endl;

    char p;
    cout<<"enter a capital alphabet";
    cin>>p;
    int q=(int)(p-64);
    cout<<q;

}
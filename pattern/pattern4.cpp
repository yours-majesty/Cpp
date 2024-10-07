#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the value of n\n";
    int n;
    cin>>n;
    char count = 'A';
    int i = 1;
    while(i<=n){
        int j = 1;
       
        while(j<=n){
            cout<<count<<" ";
            count = count+1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
    cin>>x;
    int sum=0;

    
    
    int l= x%10;
    
    x=x/10;
    sum=x+l;
    cout<<sum<<endl;
    }
    
}
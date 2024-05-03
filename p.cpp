#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"*";
        for(j=2;j<=n-1;j++)
        {
            if(i==1||i==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
      
    }
      cout<<"*"<<endl;
}
}
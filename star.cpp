// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }

// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int i=n;i>=1;i--)//for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)//for(j=1;j<=n-i+1;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}
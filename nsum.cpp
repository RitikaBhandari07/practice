#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;

//     cout<<(n*(n+1))/2;
//     return 0;
// }

int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;

    

}
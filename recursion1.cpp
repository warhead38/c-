#include<iostream>
#include<cmath>
using namespace std;
int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int ans=x*power(x,n-1);
    return ans;
}
int main()
{
    int x,n;
    cin>>x;
    cin>>n;
    cout<<power(x,n);
return 0;
}

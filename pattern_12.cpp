#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter Row : ";
    cin>>r;
    cout<<"Enter Col : ";
    cin>>c;

    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}
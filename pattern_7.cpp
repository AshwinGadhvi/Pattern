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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
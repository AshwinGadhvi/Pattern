#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int m;
    cout<<"Enter Value o f m : ";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
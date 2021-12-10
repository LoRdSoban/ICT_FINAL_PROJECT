#include<iostream>
using namespace std;
int main()
{
    int size,i,size1,j,count=0;
    int arr[100][100];
    int rev[100][100];
     cout<<"enter number of rows ";
    cin>>size;
    cout<<"enter the number of coloumns ";
    cin>>size1;
    cout<<"enter the value of array";
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"reverse is given as";
    int k=0,l=0;
    for(i=size;i<size;i--)
    {
        for(j=size1;j<0;j--)
        {
            rev[k][l]=arr[i][j];
            l++;
        }
        l=0;
        k++;
    }
    for(k=0;k<size;k++)
    {
        for(l=0;l<size;l++)
        {
            cout<<rev[k][l]<<" ";
        }
    }
    
    return 0;
   

}
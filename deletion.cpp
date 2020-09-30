#include<iostream>
using namespace std;
int main()
{
    int len,a[10];
    cout<<"Enter the size of array (max 10) :";
    cin>>len;
    //insertion
    cout<<"Enter the values of array:";
    for(int i=0;i<len;i++)
        cin>>a[i];
    //output
    cout<<"Current state of array:";
    for(int i=0;i<len;i++)
        cout<<a[i]<<" ";
    //Deletion Using position/value
    int num,pos,value;
    cout<<"\nDelete element by \n 1. Position \n 2. Value"<<endl;
    cin>>num;
    switch(num)
    {
        case 1 : cout<<"Enter the position:";
                 cin>>pos;
                 pos--;
                 for(int j=pos;j<len-1;j++)
                    a[j]=a[j+1];
                 len--;
                 //output
                 cout<<"Modified array:";
                 for(int i=0;i<len;i++)
                    cout<<a[i]<<" ";
                 break;
        case 2 : cout<<"Enter the value:";
                 cin>>value;
                 for(int i=0;i<len;i++)
                 {
                     if(a[i]==value)
                     {
                         for(int j=i;j<len-1;j++)
                            a[j]=a[j+1];
                         len--;
                         break;
                     }
                 }
                 //output
                 cout<<"Modified Array:";
                 for(int i=0;i<len;i++)
                    cout<<a[i]<<" ";
                 break;
        default : cout<<"Invalid Input"<<endl;
    }
return 0;
}

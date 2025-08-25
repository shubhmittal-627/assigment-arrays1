

/*#include<iostream>
using namespace std;
int main()
{
int n, arr[10];
int pos,value;
cout <<"enter the no of elements of an array";
cin>>n;
cout<<"enter elements of an array ";
for(int i=0;i<n;i++)
cin>>arr[i];
}
cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;
for(int i=n;i>pos;i--)
{
arr[i]=arr[i-1];
}
arr[pos]=value;
n++;
cout<<"new elements array";
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int arr[100];
int pos,n;
cout<<"enter no of elements ofg an array";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter position to delete";
cin>>pos;
for(int i=pos;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n--;
for(int i=0;i<n;i++)
{
cout<<arr[i];
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
int key;
int pos=-1;
cout<<"enter the element to be searched";
cin>>key;
for(int i=0;i<5;i++)
{
 if(arr[i]==key)
 {
    pos=i;
    break;
 }
}
if (pos==-1)
cout<<"element not found";
else
cout<<"element found at position"<<pos<<endl;
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int n;
int arr[10];
cout<<"enter size of array";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
for(int k=j;k<n-1;k++)
{
arr[k]=arr[k+1];
}
n--;
j--;
}
}
}
for(int i=0;i<n;i++)
{
cout<<arr[i];
cout<<endl;
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    cout<<"Reversed array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
/*include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter rows and cols of matrix: ";
    cin>>r>>c;

    int A[10][10], T[10][10];

    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];

    // Transpose logic
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            T[j][i] = A[i][j];
        }
    }

    cout<<"Transpose matrix:"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            cout<<T[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}*/

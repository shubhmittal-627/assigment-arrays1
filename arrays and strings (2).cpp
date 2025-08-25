

/*#include <iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
{
cin>>arr[i];
}
int low=0,high=4,pos=-1,key;
cout<<"enter the element to be searched";
cin>>key;
while(low<=high)
{
 int mid=(low+high)/2;
if(arr[mid]==key)
{
pos=mid;
break;
}
else if(key>arr[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(pos==-1)
cout<<"element not found";
else
cout<<"element found at index"<<pos<<endl;
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter size of an array";
cin>>n;
int arr[10];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
cout<<endl;
return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1,str2;
cout<<"enter first string";
getline(cin,str1);
cout<<"enter second string";
getline(cin,str2);
string result =str1+str2;
cout<<result<<endl;
return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1,str2;
cout<<"enter first string";
getline(cin,str1);
int n=str1.length();
for(int i=0;i<n/2;i++)
{
char temp=str1[i];
str1[i]=str1[n-i-1];
str1[n-i-1]=temp;
}
cout<<str1<<endl;
}*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1;int n;
cout<<"enter size of an array";
cin>>n;
string arr[100];
cout<<"enter first string";
getline(cin,str1);
int n1=str1.length();
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
string temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(int i=0;i<n;i++)
{
cout<<str1;
}
return 0;
}

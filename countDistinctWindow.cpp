/*
COUNT DISTINCT ELEMENTS IN EVERY WINDOW

INPUT:
6 (ARRAY SIZE)
10 10 5 3 20 5 (ARRAY ELEMENTS)

OUTPUT:
3 4 3 (DISTINCT ELEMENTS IN EVERY WINDOW)

THIS IS NAIVE APPROACH THE TIME COMPLEXITY OF THIS APPROACH IS 
O((n-window)*window*window)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,window;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cin>>window;
  int count=0;
  for(int i=0;i<=n-window;i++)
  {
    count=0;
    for(int j=0;j<window;j++)
    {
      bool flag=false;
      for(int k=0;k<j;k++)
      {
        if(arr[i+j]==arr[i+k]){
          flag=true;
          break;
        }
      }
      if(flag==false)
        count+=1;
    }
    cout<<count<<" ";
  }
  return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr_n,query,n,temp,x,y;
    cin>>arr_n>>query;
    vector<int> a[arr_n];
    for(int i=0;i<arr_n;i++)
    {
      cin>>n;
      for(int j=0;j<n;j++)
      {
        cin>>temp;
        a[i].push_back(temp);
      }
    }
    for(int i=0;i<query;i++)
    {
      cin>>x>>y;
      cout<<a[x].at(y)<<endl;
    }
    return 0;
}

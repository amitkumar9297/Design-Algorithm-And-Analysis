#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void reverseArray(int arr[],int len)
{
    for(int i=0;i<len/2;++i){
        std::swap(arr[i],arr[len-i-1]);
    }
}

int32_t main()
{
    int a[5]={1,2,3,4,5};
    reverseArray(a,5);

    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    return 0;
}
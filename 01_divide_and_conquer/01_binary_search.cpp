/*
    the complexity of binary search is:-
        log2(n)
*/

#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int target)
{

    int start = 0;
    int end = 8;
    int mid = (start + end) / 2;
    if (arr[mid] == target)
    {
        cout << arr[mid] << endl;
    }
    if (target > arr[mid])
    {
        start = mid + 1;
    }
    else
    {
        end = mid - 1;
    }
    mid = (start + end) / 2;
    while (arr[mid] != target && end == 0)
    {
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (target == arr[mid])
    {
        cout << "your target is found at location : " << mid << endl;
    }
    else
    {
        cout << "your target is not found" << endl;
    }
}

int32_t main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    binarySearch(arr, 7);

    return 0;
}
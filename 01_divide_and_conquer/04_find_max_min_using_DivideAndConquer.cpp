#include <bits/stdc++.h>
using namespace std;

int max_min(int arr[], int start, int end, int max, int min)
{

    int mid;
    if (start == end)
    {
        max = min = arr[start];
        return max && min;
    }
    else if (start == (end - 1))
    {
        if (arr[start] < arr[end])
        {
            min = arr[start];
            max = arr[end];
        }
        else
        {
            max = arr[start];
            min = arr[end];
        }
    }
    else
    {
        mid = int((start + end) / 2);
    }
    cout << mid << endl;

    max_min(arr, start, mid, max, min);
    max_min(arr, mid + 1, end, max, min);
}

int32_t main()
{
    int arr[9] = {2, 6, 4, 8, 1, 9, 7, 3, 5};
    cout << max_min(arr, 0, 8, INT_MIN, INT_MAX);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i];
    }

    return 0;
}
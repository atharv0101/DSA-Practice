#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int target, int low, int high)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (target > arr[mid])
        {
            return binarySearch(arr, target, mid + 1, high);
        }
        else if (target < arr[mid])
        {
            return binarySearch(arr, target, low, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int result = binarySearch(arr, 5, 0, 5);

    if (result == -1)
    {
        cout << "NO Result Found";
    }
    else
        cout << "The Element Was Found at " << result << " position";
}
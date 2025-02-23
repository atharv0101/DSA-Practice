#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (target == arr[mid])
            return mid;

        else if (target > arr[mid])
            low = mid + 1;

        else
        {
            high = mid - 1;
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
    int result = binarySearch(arr, 5);

    if (result == -1)
    {
        cout << "NO Result Found";
    }
    else
        cout << "The Element Was Found at " << result << " position";
}
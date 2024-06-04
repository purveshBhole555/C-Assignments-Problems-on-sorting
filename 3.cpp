#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[5] = {7, 2, 32, 5, 20};
    int size = 5;
    int k = 3;
    insertionSort(arr, 5);
    cout << arr[k - 1] << endl;
    return 0;
}
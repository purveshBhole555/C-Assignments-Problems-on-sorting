#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findK(vector<int>& arr) {
    int minElement = *min_element(arr.begin(), arr.end());
    int maxElement = *max_element(arr.begin(), arr.end());
    
    for (int k = minElement; k <= maxElement; ++k) {
        vector<int> modified(arr.size());
        for (int i = 0; i < arr.size(); ++i) {
            modified[i] = abs(arr[i] - k);
        }
        bool sorted = is_sorted(modified.begin(), modified.end());
        if (sorted) {
            return k;
        }
    }
    
    return -1;
}

int main() {
    vector<int> arr = {3, 5, 7, 9, 11};
    
    int result = findK(arr);
    
    if (result != -1) {
        cout << "K = " << result << " satisfies the condition." << endl;
    } else {
        cout << "No such integer K exists that satisfies the condition." << endl;
    }

    return 0;
}

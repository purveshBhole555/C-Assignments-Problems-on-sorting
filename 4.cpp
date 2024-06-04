#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1, 3, 3, 2, 4, 4, 4};

    unordered_map<int, int> freqMap;
    for (int num : nums)
    {
        freqMap[num]++;
    }

    int maxFreq = 0;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it)
    {
        maxFreq = max(maxFreq, it->second);
    }

   int minOperations = nums.size() - maxFreq;

    cout << "Minimum operations required to sort the array: " << minOperations << endl;

    return 0;
}

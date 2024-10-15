#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

// Function to implement Kadane's Algorithm
int kadaneAlgorithm(const std::vector<int>& arr) {
    int maxCurrent = arr[0];  // Current maximum sum up to the current element
    int maxGlobal = arr[0];   // Overall maximum sum found so far

    for (size_t i = 1; i < arr.size(); i++) {
        // Update the current maximum sum
        maxCurrent = std::max(arr[i], maxCurrent + arr[i]);

        // Update the global maximum sum if the current maximum is larger
        if (maxCurrent >  maxGlobal) {
            maxGlobal = maxCurrent;
        }  
    }

    return maxGlobal;
}

// Driver code to test Kadane's Algorithm
int main() {
    // Example input array
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Print the input array
    std::cout << "Input array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Find and print the maximum subarray sum
    int maxSum = kadaneAlgorithm(arr);
    std::cout << "Maximum contiguous subarray sum: " << maxSum << std::endl;

    return 0;
}

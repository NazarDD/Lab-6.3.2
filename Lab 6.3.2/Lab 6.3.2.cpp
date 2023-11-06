#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int findMinOddRecursive(const std::vector<int>& arr, int index, int minOdd) {
    if (index < arr.size()) {
        if (arr[index] % 2 != 0 && arr[index] < minOdd) {
            minOdd = arr[index];
        }
        return findMinOddRecursive(arr, index + 1, minOdd);
    }
    return minOdd;
}

template <typename T>
T findMinOddGeneric(const std::vector<T>& arr, int index, T minOdd) {
    if (index < arr.size()) {
        if (arr[index] % 2 != 0 && arr[index] < minOdd) {
            minOdd = arr[index];
        }
        return findMinOddGeneric(arr, index + 1, minOdd);
    }
    return minOdd;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    const int size = 10;
    std::vector<int> numbers = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < size; ++i) {
        numbers[i] = (std::rand() % 101);
    }
    std::cout << "Generated array: [ ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "]" << std::endl;

    int minOdd = findMinOddRecursive(numbers, 0, INT_MAX);
    std::cout << "Using the recursive function: Smallest odd element = " << minOdd << std::endl;

    int minOddGeneric = findMinOddGeneric(numbers, 0, std::numeric_limits<int>::max());
    std::cout << "Using the function template: Smallest odd element = " << minOddGeneric << std::endl;

    return 0;
}

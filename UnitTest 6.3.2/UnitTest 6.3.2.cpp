#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3.2/Lab 6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
    TEST_CLASS(UnitTest631)
    {
    public:
        TEST_METHOD(TestFindMinOddRecursive)
        {
            std::vector<int> arr = { 37, 82, 19, 64, 53, 41, 76, 29, 67, 94 };
            int minOdd = findMinOddRecursive(arr, 0, INT_MAX);
            Assert::AreEqual(minOdd, 19);
        }

        TEST_METHOD(TestFindMinOddGeneric)
        {
            std::vector<int> arr = { 10, 24, 63, 88, 17, 49, 52, 71, 45, 36 };
            int minOdd = findMinOddGeneric(arr, 0, std::numeric_limits<int>::max());
            Assert::AreEqual(minOdd, 17);
        }
    };
}

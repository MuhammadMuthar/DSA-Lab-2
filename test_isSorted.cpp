#include <iostream>
#include <cassert>
using namespace std;
 
bool isSorted(const int* arr, const int size); // declared, not yet implemented
 
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}
 
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}
 
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}
 
void testSingleElement() {
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
}
 
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}
 
void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}
 
// Additional test 1: an empty array is vacuously sorted
void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}
 
// Additional test 2: all elements equal counts as non-decreasing
void testAllEqualElements() {
    int arr[] = {4, 4, 4, 4};
    assert(isSorted(arr, 4) == true);
}
 
int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqualElements();
 
    cout << "All tests passed!" << endl;
    return 0;
}
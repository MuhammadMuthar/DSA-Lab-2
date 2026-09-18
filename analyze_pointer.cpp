#include <iostream>
using namespace std;
 
// Part 1: prints the address held by the pointer and the value it points to
void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value at that location: " << *ptr << endl;
}
 
int main() {
    // Part 2a: an int allocated on the stack
    int iValue = 42;
    cout << "Stack-allocated integer:" << endl;
    analyze_pointer(&iValue);
 
    // Part 2b: an int allocated on the heap
    int *hValue = new int;
    *hValue = 99;
    cout << "\nHeap-allocated integer:" << endl;
    analyze_pointer(hValue);
 
    // Free the heap allocation
    delete hValue;
    return 0;
}
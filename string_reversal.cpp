#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    int len;
    cout << "Enter the maximum length of your string: ";
    cin >> len;
    cin.ignore(); // discard the leftover newline before getline
 
    // Dynamically allocate memory for the input string
    char *str = new char[len + 1];
    cout << "Enter a string (up to " << len << " characters): ";
    cin.getline(str, len + 1);
 
    int actualLen = strlen(str);
 
    // Dynamically allocate memory for the reversed string
    char *reversed = new char[actualLen + 1];
    for (int i = 0; i < actualLen; i++) {
        reversed[i] = str[actualLen - 1 - i];
    }
    reversed[actualLen] = '\0';
 
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversed << endl;
 
    // Free dynamically allocated memory
    delete[] str;
    delete[] reversed;
    return 0;
}
 
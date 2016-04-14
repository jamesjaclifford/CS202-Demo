#include <iostream>

using namespace std;

int main() {
    char oldString[10] = "Hello.";
    char newString[10];

    int i = 0;
    while(oldString[i] != '\0') {
        newString[i] = oldString[i];
        i++;
    }

    newString[i] = '\0';

    cout << newString;

    return 0;
}

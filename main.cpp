#include "string.h"
#include <iostream>
using namespace std;
int main() {
    String defaultString;
    defaultString.display();

    String customSizeString(50);
    customSizeString.input();
    customSizeString.display();

    String userInputString("Hello");
    userInputString.display();
    cout << "Количество объектов: " << String::Count() << endl;

    return 0;
}

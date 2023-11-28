#include "string.h"
#include <iostream>
using namespace std;
int main() {
    String string1;
    string1.display();

    String newstring(50);
    newstring.input();
    newstring.display();

    String inputstring("Hello");
    inputstring.display();
    cout << "Количество объектов: " << String::Count() << endl;

    return 0;
}

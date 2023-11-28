#include "string.h"
#include <iostream>
using namespace std;
int String::count = 0;
String::String() : size(0) {
    count++;
    str[0] = '\0';
}

String::String(int size) : size(size) {
    count++;
    str[0] = '\0';
}

String::String(const char* input) : size(0) {
    while (input[size] != '\0' && size < 80) {
        str[size] = input[size];
        size++;
    }
    str[size] = '\0';
    count++;
}

String::~String() {
    count--;
}

int String::Count() {
    return count;
}

void String::input() {
    cout << "Введите строку: ";
    cin >> str;
    size = 0;
    while (str[size] != '\0' && size < 80) {
        size++;
    }
}

void String::display() {
    cout << "Строка: " << str << endl;
}

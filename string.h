#ifndef STRING_H
#define STRING_H
class String {
private:
    int count;
    char str[81];
    int size;

public:
    String();
    String(int size);
    String(const char* input);
    ~String();
    static int Count();
    void input();
    void display() ;
};
#endif

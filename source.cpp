// execution command: g++ source.cpp shell.cpp -o source

#include "shell.h"
#include <iostream>
using namespace std;

int main(void){
    cshell obj; // object generation
    int table[obj.size] = {20,6,55,74,3,45,13,87,46,30};
    obj.show(&table[0]);
    obj.shsort(&table[0]);
    obj.show(&table[0]);

    return 0;
}
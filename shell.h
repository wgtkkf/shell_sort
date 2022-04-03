#ifndef _SHELL_H_
#define _SHELL_H_

class cshell{
    public:
        cshell(); // construcotr
        virtual ~cshell(); // destructor
        void show(int *num);
        void swap(int *x, int *y);
        void shsort(int *num);
        int size = 10;
    private:
        int h = 0;
        int weight1 = 9;
        int weight2 = 3;
};

#endif
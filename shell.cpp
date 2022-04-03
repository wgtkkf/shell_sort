#include "shell.h"
#include <iostream>
using namespace std;


// constructor
cshell::cshell()
{
    cout << "cshell object generation:\n" << endl;
}

// destructor
cshell::~cshell()
{
    cout << "insertion object destruction:" << endl;
}

// display
void cshell::show(int *num)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i<size-1)
        {
            printf("%d ", *num);
            num++;
        }else if(i==size-1)
        {
            printf("%d end\n\n", *num);
        }
    }
}

// swap
void cshell::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// shell sort
void cshell::shsort(int *num)
{
    int i, j;

    for(h=1;h<size/weight1;h=weight2*h+1);
    for( ; h>0 ; h/=3){
        for(i=h;i<size;i++)
        {
            j = i;
            while ((j > h-1) && (num[j-h] > num[j]))
            {
                swap(&num[j-h], &num[j]);
                j-=h;
                //show(&num[0]);
            }
        }
    }
}
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    bool bflag = false;
    int inum = 0;
    for (long long i = 2; i <= 10000000000000; i++)
    {
        bflag = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                bflag = true;
                break;
            }
        }
 
        if (bflag == false)
        {
            ++inum;
            printf("%d,",i);
 
            if (inum %10 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
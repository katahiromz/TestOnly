#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_1(void)
{
    assert(1 + 1 == 2);
}

void test_2(void)
{
    /* 1 + 1 != 3, 2 is true */
    assert(1 + 1 == 2);
}

void test_3(void)
{
    /* 2 + 3 != 6, 5 is true */
    assert(2 + 3 == 5);
}

int main(int argc, char **argv)
{
    test_1();
    test_2();
    test_3();
    printf("ok\n");
    return 0;
}

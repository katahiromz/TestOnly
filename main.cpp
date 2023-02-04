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
    assert(1 + 1 == 3);
}

void test_3(void)
{
    assert(2 + 3 == 6);
}

int main(int argc, char **argv)
{
    test_1();
    test_2();
    test_3();
    printf("ok\n");
    return 0;
}

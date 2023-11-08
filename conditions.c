#include <stdio.h>

int main(int argc, char const* argv[])
{
    int e = 43;
    int f = 34;

    // If statements
    if (e > f) {
        printf("E is greater than F");
    }
    else if (f > e) {
        printf("F is greater than E");
    }

    return 0;
}

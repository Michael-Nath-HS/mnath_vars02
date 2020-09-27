#include <stdio.h>

int recurse(int n)
{
    printf("%d\n", n);
    return recurse(n + 1);
}

int main()
{
    char vowel = 'e';
    char capitalVowel = 'E';
    char one = '1';
    unsigned int something = -34;
    int someArray[4];
    for (int i = 0; i < 5; i++)
    {
        someArray[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", someArray[i]);
    }

}
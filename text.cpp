#include <iostream>
#include "text.h"
void entertext(char *text) {
    printf("Enter Text :\n");
    fgets(text,99,stdin);
}
void printtext(char *text)
{printf("%s\n",text);}
void clear(void)
{
    while(getchar()!= '\n');
}
int count(char *text)
{
    int c = 0 ;
    while(*(text + c))
{
        c++;
}
    c =  c - 1;
    return c;

}
void bigLetters(char *ciag)
{
    while (*ciag)
    {
        if ('a' <= *ciag && *ciag <= 'z')
        {
            *ciag -= ('a' - 'A');
        }
        ciag++;
    }
}
void smallLetters(char *ciag)
{
    while (*ciag)
    {
        if ('A' <= *ciag && *ciag <= 'Z')
        {
            *ciag += ('a' - 'A');
        }
        ciag++;
    }
}


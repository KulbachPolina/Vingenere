#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if(argc!=2)
    {
        printf("You have missed a key or entered more than one");
        return 1;
    }
    string key = argv[1];


    for (int i=0; i<strlen(key); i++)
    {
        if(isalpha(key[i])!=true)
        {
            printf("The key is not alphabetical");
            return 1;
        }
        else
        key[i] = toupper(key[i]);

    }
    string text = GetString();
    int counter = 0;

    for (int i=0; i<strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            if (isupper(text[i]))
        text[i] = (((text[i]-'A') + (key[(counter++)%strlen(key)]-'A')) % 26) + 'A';

                if(islower(text[i]))
                text[i] = ((text[i]-'a') + (key[(counter++)%strlen(key)]-'A')) % 26 + 'a';

        }

       else
        text[i] = text[i];
}
printf("%s\n",text);

return 0;
}

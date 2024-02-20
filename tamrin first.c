#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    char output[100];
    int i, j;
    int len;
    int index;
    int start; // a variable to keep track of the start of each section

    printf("Enter a string in the format of \"1234,1222,yuer\":\n");
    scanf("%s", input);

    len = strlen(input);
    index = 0;
    j = 0;
    start = 0; // initialize the start to zero

    for (i = 0; i < len; i++)
    {
        if (input[i] == ',')
        {
            printf("index %d : ", index);
            for (int k = start; k < j; k++) // use start instead of j - index
            {
                printf("%c", output[k]);
            }
            printf("\n");
            index++;
            output[j] = '@';
            j++;
            start = j + 1; // update the start to the next character
        }
        else
        {
            output[j] = input[i];
            j++;
        }
    }

    printf("index %d : ", index);
    for (int k = start; k < j; k++) // use start instead of j - index
    {
        printf("%c", output[k]);
    }
    printf("\n");

    output[j] = '\0';
    printf("%s\n", output);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100]; 
    printf("Enter a string in the format of \"1234,122342,yuer\":\n");
    scanf("%s", input); 
    int index = 0; 
    int len = 0; 
    for (int i = 0; i < strlen(input); i++) 
    {
        if (input[i] == ',') 
        {
            printf("index %d : %d len\n", index, len); 
            index++; 
            len = 0; 
            
        }
        else 
        {
            len++; 
        }
    }
    printf("index %d : %d len\n", index, len); 
    return 0;
}

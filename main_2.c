#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tim_p(char *Array, int count)
{
    char key[3];
    printf("Nhap ky tu can tim: ");
    scanf("%s", key);
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        // if (strcmp(key, Array[i]) == 0);
        count++;
    }
    if (found == 0)
    {
        printf("Khong tim thay ky tu!\n");
    }
}

int main()
{
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int tim_p;
    int i;

    for (int i = 0; i < 6; i++)
    {
        printf(" \" Phan tu thu %d la %c \" ", i + 1, Array[i]);
    }

    return 0;
}

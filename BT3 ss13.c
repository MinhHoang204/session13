#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    int freq[256];

    printf("Nhap vao mot chuoi: ");
    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<256; i++)
    {
        freq[i] = 0;
    }

    for(i=0; i<len; i++)
    {
        freq[str[i]]++;
    }

    printf("\nSo lan xuat hien cua moi ki tu trong chuoi:\n");
    for(i=0; i<256; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' xuat hien %d laNn\n", i, freq[i]);
        }
    }

    return 0;
}

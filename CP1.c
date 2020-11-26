#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int id;
    char nama[15], secret_code[15];

    printf("Masukkan ID : ");
    scanf("%d", &id);

    printf("Masukkan Nama : ");
    fflush(stdin);
    fgets(nama, 15, stdin);
    strtok(nama, "\n");


    printf("Masukkan Secret Code : ");
    fflush(stdin);
    fgets(secret_code, 15, stdin);
    strtok(secret_code, "\n");

    if(id==1123418 && !strcmp(nama, "Agent P") && !strcmp(secret_code, "3#4943181D"))
    {
        printf("Protect this data : S3A{S3CRETC0DE}");
    }
    else if(id==1102141 && !strcmp(nama, "Agent X") && !strcmp(secret_code, "#9213284HB"))
    {
        printf("Protect this data : S3A{S3CRETC0DE}");
    }
    else
    {
        printf("ACCESS DENIED");
    }
    
    return 0;
}
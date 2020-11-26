#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int angka[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int jumlah_diagonal;

    printf("Baris 1 Kolom 1 : %i\n", angka[0][0]);
    printf("Baris 1 Kolom 2 : %i\n", angka[0][1]);
    printf("Baris 1 Kolom 3 : %i\n", angka[0][2]);

    printf("Baris 2 Kolom 1 : %i\n", angka[1][0]);
    printf("Baris 2 Kolom 2 : %i\n", angka[1][1]);
    printf("Baris 2 Kolom 3 : %i\n", angka[1][2]);

    printf("Baris 3 Kolom 1 : %i\n", angka[2][0]);
    printf("Baris 3 Kolom 2 : %i\n", angka[2][1]);
    printf("Baris 3 Kolom 3 : %i\n", angka[2][2]);

    printf("Matriks : \n[ %i %i %i ]\n", angka[0][0], angka[0][1], angka[0][2]);
    printf("[ %i %i %i ]\n", angka[1][0], angka[1][1], angka[1][2]);
    printf("[ %i %i %i ]\n\n", angka[2][0], angka[2][1], angka[2][2]);


    jumlah_diagonal = angka[0][0] + angka[1][1] + angka[2][2];
    printf("Jumlah diagonal : %i", jumlah_diagonal);

}
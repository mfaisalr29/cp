#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nama[6];

    //Memberikan perintah kepada user untuk input nama
    printf("Masukkan nama kamu (maks 6 huruf, 1 kata): ", nama);
    scanf("%s", &nama);

    //memberikan perintah kepada user untuk input tahun lahir
    int umur, hasil;
    printf("Masukkan tahun lahir anda : ", umur);
    scanf("%i", &umur);
    hasil = 2020 - umur;

    //Hasil yang akan dioutput
    printf("Hai %s, tahun ini kamu berumur %i tahun!", nama, hasil);

    return 0;
}

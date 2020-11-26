#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nama[15];
    int bulan_lahir, diskon, total_belanja, hasil_akhir;

    printf("Nama pelanggan : ");
    fgets(nama, 10, stdin);
    strtok(nama, "\n");

    printf("Bulan lahir pelanggan : ");
    scanf("%i", &bulan_lahir);

    printf("Total belanja : ");
    scanf("%i", &total_belanja);

    diskon = (total_belanja * 20 / 100) + (total_belanja * bulan_lahir / 100);

    hasil_akhir = total_belanja - diskon;

    printf("Nama pelanggan : %s\n", nama);
    printf("Bulan lahir pelanggan : %i\n", bulan_lahir);
    printf("Total belanja : %i\n\n", total_belanja);
    printf("Pelanggan %s mendapatkan diskon Rp%i\n\n", nama, diskon);
    printf("Total belanja setelah diskon : Rp%i\n", hasil_akhir);

    return 0;
}
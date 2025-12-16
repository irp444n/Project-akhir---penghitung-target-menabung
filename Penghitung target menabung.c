#include <stdio.h>

int main() {
    char target[50];
    int harga, tabungan, setor, bulan = 0;

    printf("Target menabung: ");
    fgets(target, sizeof(target), stdin);

    printf("Harga target: ");
    scanf("%d", &harga);

    printf("Tabungan awal: ");
    scanf("%d", &tabungan);

    printf("Rencana menabung per bulan: ");
    scanf("%d", &setor);

    printf("\n=== SIMULASI ===\n");

    while (tabungan < harga) {
        bulan++;
        tabungan += setor;
        float persen = (tabungan / (float)harga) * 100.0f;
        if (persen > 100) persen = 100;

        printf("Bulan %-2d : Rp %d (%.1f%%)\n", bulan, tabungan, persen);
    }

    printf("Estimasi tercapai: %d bulan\n", bulan);

    return 0;
}

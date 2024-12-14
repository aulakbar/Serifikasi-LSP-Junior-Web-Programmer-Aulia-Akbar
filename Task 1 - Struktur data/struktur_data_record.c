#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Struktur data record Mahasiswa
typedef struct {
    char npm[15];
    char nama[50];
    char tempat_lahir[50];
    char tanggal_lahir[15];
    char prodi[30];
} Mahasiswa;

// Array untuk menyimpan data mahasiswa
#define MAX_MAHASISWA 10
Mahasiswa data_mahasiswa[MAX_MAHASISWA];
int jumlah_mahasiswa = 0; //ininsialisasi jumlah mahasiswa awal

// Fungsi untuk menambah data mahasiswa
void tambah_mahasiswa(char *npm, char *nama, char *tempat_lahir, char *tanggal_lahir, char *prodi) {
    if (jumlah_mahasiswa < MAX_MAHASISWA) {
        strcpy(data_mahasiswa[jumlah_mahasiswa].npm, npm);
        strcpy(data_mahasiswa[jumlah_mahasiswa].nama, nama);
        strcpy(data_mahasiswa[jumlah_mahasiswa].tempat_lahir, tempat_lahir);
        strcpy(data_mahasiswa[jumlah_mahasiswa].tanggal_lahir, tanggal_lahir);
        strcpy(data_mahasiswa[jumlah_mahasiswa].prodi, prodi);
        jumlah_mahasiswa++;
        printf("Data mahasiswa dengan npm %s  berhasil ditambahkan!\n", npm);
    } else {
        printf("Kapasitas data sudah penuh!\n");
    }
}

// Fungsi untuk menghapus data mahasiswa berdasarkan NPM
void hapus_mahasiswa(char *npm) {
    int ditemukan = 0;
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        if (strcmp(data_mahasiswa[i].npm, npm) == 0) {
            ditemukan = 1;
            for (int j = i; j < jumlah_mahasiswa - 1; j++) {
                data_mahasiswa[j] = data_mahasiswa[j + 1];
            }
            jumlah_mahasiswa--;
            printf("Data mahasiswa dengan NPM %s berhasil dihapus!\n", npm);
            break;
        }
    }
    if (!ditemukan) {
        printf("Data mahasiswa dengan NPM %s tidak ditemukan!\n", npm);
    }
}

// Fungsi untuk menampilkan seluruh data mahasiswa
void tampilkan_mahasiswa() {
    if (jumlah_mahasiswa == 0) {
        printf("Tidak ada data mahasiswa yang terdaftar!\n");
    } else {
        printf("\nDaftar Mahasiswa:\n");
        printf("===============================================\n");
        for (int i = 0; i < jumlah_mahasiswa; i++) {
            printf("NPM            : %s\n", data_mahasiswa[i].npm);
            printf("Nama           : %s\n", data_mahasiswa[i].nama);
            printf("Tempat Lahir   : %s\n", data_mahasiswa[i].tempat_lahir);
            printf("Tanggal Lahir  : %s\n", data_mahasiswa[i].tanggal_lahir);
            printf("Program Studi  : %s\n", data_mahasiswa[i].prodi);
            printf("-----------------------------------------------\n");
        }
    }
}

int main() {
    // Contoh penggunaan fungsi
    tampilkan_mahasiswa();
    tambah_mahasiswa("0620204004", "Aulia Akbar", "Cimahi", "2000-01-01", "Teknik Informatika");
    tambah_mahasiswa("0620204015", "Adi Budi", "Bandung", "1999-05-12", "Teknik Informatika");
    tampilkan_mahasiswa();
    printf("\nMenghapus data mahasiswa dengan NPM 0620204015\n");
    hapus_mahasiswa("0620204015");
    tampilkan_mahasiswa();
    return 0;
}

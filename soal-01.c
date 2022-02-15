/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : Overview of C Language
*Percobaan        : -
*Hari dan Tanggal : Rabu, 16 Februari 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void main() {
    int A; //Variable Awal
    int B; //Variable Akhir
	
    int select; //Variable menentukan ganjil, genap, atau prima 
    int not_prime; //Untuk menentukan prime atau tidak
	
    int isvalid = 0; //Variable bool untuk validasi A < B
    int counter = 0 ;
    
    printf("PROGRAM PENCARIAN BILANGAN\n");
    printf("\n");
	
	printf("Bilangan apa yang ingin dicari?\n");
	printf("1 : Ganjil\n");
	printf("2 : Genap\n");
	printf("3 : Prima\n\n");
	
	printf("Silahkan masukkan input : ");
	scanf("%d", &select);
	
	if(select == 1){
		printf("\nPROGRAM PENCARIAN BILANGAN GANJIL\n\n");
	}
	
	else if(select == 2){
		printf("\nPROGRAM PENCARIAN BILANGAN GENAP\n\n");
	}

	else if(select == 3){
		printf("\nPROGRAM PENCARIAN BILANGAN PRIMA\n\n");
	}
	
	else{
		printf("\nInput salah. Program selesai!");
		return;
	}
	
	//Input angka pengulangan sampai benar
	while(isvalid == 0){
		printf("Masukkan bilangan awal mulai : ");
		scanf("%d", &A);
		printf("Masukkan bilangan akhir : ");
		scanf("%d", &B);
		
		//Kondisi Input Salah
		if (A>B){
			printf("Input salah. Masukkan input kembali!\n\n");
		}
		//Kondisi Input Benar
		else{
			isvalid =1;
			printf("\n");
			if(select == 1){
				printf("Semua bilangan ganjil dari %d sampai %d adalah :\n", A, B);
			}
			
			if(select == 2){
				printf("Semua bilangan genap dari %d sampai %d adalah :\n", A, B);
			}
			
			if(select == 3){
				printf("Semua bilangan prima dari %d sampai %d adalah :\n", A, B);
			}
		}
	}
	
	if(select == 1){
		for(int i = A; i <= B; i++){
			if (i % 2 == 1 && i >= 0){
				printf("%d\n", i);
				counter++;
			}
		}
		printf("\nBanyaknya bilangan ganjil : %d", counter);
	}
	
	if(select == 2){
		for(int i = A; i <= B; i++){
			if (i % 2 == 0  && i >= 0){
				printf("%d\n", i);
				counter++;
			}
		}
		printf("\nBanyaknya bilangan genap : %d", counter);
	}
	
	if(select == 3){
		while (A<=B) {
			not_prime = 0;
			for (int i = 2; i <= A / 2; ++i) { //Fungsi menentukan prima
				if (A % i == 0) {
					not_prime = 1;
				}
			}
			//Jika prima dan lebih dari 1
			if ((not_prime == 0) && (A > 1)){
				printf("%d\n", A); 
				counter++;
				}
			
			++A; 
		}
    printf("\nBanyaknya bilangan prima : %d", counter);
    return;
	}
	
    return;
}

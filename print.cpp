#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>

main(){
ofstream file;
file.open("test.doc");
file<<"Hello Printer Saya Sedang Belajar Menulis Di Word.";
file.open("test.db");
file.close();
printf("Silahkan Tekan Enter...");
getch();
system("Winword /p test.doc");
printf("\nprinting...");
getch();
}

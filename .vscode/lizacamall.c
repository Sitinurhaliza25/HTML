#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h> 
// #include "validasi.c"
#define handle GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x,int y){
    COORD c={x,y};
     SetConsoleCursorPosition(handle,c);
}

void set(int text,int bg){
    SetConsoleTextAttribute(handle,bg * 16 + text);
}

void kotak(int x,int y,int panjang,int lebar,int text,int bg){
    for(int i = 0; i <= panjang; i++){
        for(int j = 0; j <= lebar; j++){
            if(i == 0 || j == 0 || i == panjang || j == lebar){
                gotoxy(x+i,y+j);set(text,bg);printf("%c",219);
            }
            else {
                gotoxy(x+i,y+j);set(bg,bg);printf(" ");
            }
        }
    }
}


void welcome(){
    kotak(0,0,142,39,12,15);
    kotak(3,3,136,33,3,15);

    for(int a=0;a<12;a++){
    
    set(a,15);
    gotoxy(58,5);printf("W E L C O M E  T O !");
    gotoxy(48,6);printf("P R O J E K A N   S I T I N U R H A L I Z A");
    gotoxy(28,7);printf("<<<<<<<<<<<<<<<<<<<<<<< W A K A       W A K A      S P O R T >>>>>>>>>>>>>>>>>>>>>>>>>>>");
    gotoxy(40,9);printf("%c     %c   %c%c%c    %c   %c     %c%c%c        %c     %c    %c%c%c    %c   %c    %c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);
    gotoxy(40,10);printf("%c     %c  %c   %c   %c  %c     %c   %c       %c     %c   %c   %c   %c  %c    %c   %c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);
    gotoxy(40,11);printf("%c  %c  %c  %c%c%c%c%c   %c%c%c      %c%c%c%c%c       %c  %c  %c   %c%c%c%c%c   %c%c%c     %c%c%c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5); 
    gotoxy(40,12);printf("%c %c %c %c  %c   %c   %c  %c     %c   %c       %c %c %c %c   %c   %c   %c  %c    %c   %c        ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5); 
    gotoxy(40,13);printf("%c%c   %c%c  %c   %c   %c   %c    %c   %c       %c%c   %c%c   %c   %c   %c   %c   %c   %c         ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);

    gotoxy(55,15);printf("%c%c%c%c%c%c %c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(55,16);printf("%c%c     %c%c   %c%c %c%c    %c%c %c%c   %c%c    %c%c        ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(55,17);printf("%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c    %c%c %c%c%c%c%c%c     %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(55,18);printf("     %c %c%c      %c%c    %c%c %c%c   %c%c    %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(55,19);printf("%c%c%c%c%c%c %c%c       %c%c%c%c%c%c  %c%c   %c%c    %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(45,24);printf("       K  A  S  I  R     S  E  D  E  R  H  A  N  A");Sleep(5);                                                                                                                                                                                                                                       
 }   
 for(int a=1,b=1;a<=100;a++)
      {
         set(10,15);
			gotoxy(68,31);printf("Loading %d%%",a);Sleep(15);
      	if(a%2==0)
         {
      		set(15,0);
   			gotoxy(b+47,33);printf("%c",177);Sleep(20);b++;
      	}
   	}
  
  menu();
}
void menu(){
   system("cls");
   int pilih;
   kotak(0,0,142,39,12,15);
   kotak(3,3,136,33,3,15);
   kotak(20,5,100,3,3,14);
   kotak(35,10,40,4,3,14);
   kotak(35,17,40,4,3,14);
   kotak(35,24,40,4,3,14);
   kotak(35,31,40,4,3,14);
   kotak(90,20,40,4,3,14);

   gotoxy(60,7);printf("SILAHKAN PILIH MENU");
   gotoxy(45,12);printf(" >>>  1.LOGIN  <<< ");
   gotoxy(43,19);printf(" >>> 2. DAFTAR AKUN <<< ");
   gotoxy(45,26);printf(" >>>  3. INFO  <<< ");
   gotoxy(45,33);printf(" >>>  4. KELUAR  <<< ");
   gotoxy(97,22);printf("PILIHAN :");
   set(3,15);gotoxy(90,18);printf(" <=== Tekan Pilihan Anda (1 s/d 4) ===> ");
   gotoxy(107,22);set(3,14);printf("");
   scanf("%d",&pilih);

   if(pilih == 1){
    login();
   }
   else if(pilih == 2){

   }
   else if(pilih == 3){

   }
   else if(pilih == 4){

   }

   else{
     for(int k = 0; k <= 7; k++){
                if(k % 2 == 0){
                    gotoxy(90,27);set(4,14);printf("INPUT YANG ANDA MASUKKAN SALAH ");
                    Sleep(500);
                }
                else{
                    gotoxy(90,27);printf("                               ");
                    Sleep(300);
                }
            }
   }
}

void login(){
    char user[100] = {},pass[100] = {},tamppass[100][100],tampuser[100][100];
    int index = 0,masuk = 0;
    char input,tamp;

    system("cls");

    kotak(0,0,142,39,10,14);
    kotak(43,13,60,4,3,12);
    kotak(43,19,60,4,3,12);

    gotoxy(48,15);set(0,12);printf("Username\t:");
    gotoxy(48,21);set(0,12);printf("Password\t:");
    gotoxy(46,34); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    gotoxy(46,35); printf("%c",186);
    gotoxy(99,35); printf("%c",186);
    gotoxy(46,36); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    gotoxy(46,4);set(4,14);printf(" _       ___  ___  _  ____    ");  
    gotoxy(46,5);set(4,14);printf("|\\  \\     |\\   _  \\|\\   __\\|\\  \\|\\   __ \\     ");
    gotoxy(46,6);set(4,14);printf("\\ \\  \\    \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\ \\  \\ \\  \\    ");
    gotoxy(46,7);set(4,14);printf(" \\ \\  \\    \\ \\  \\\\\\  \\ \\  \\  __\\ \\  \\ \\  \\ \\  \\   ");
    gotoxy(46,8);set(4,14);printf("  \\ \\  \\__\\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\  ");
    gotoxy(46,9);set(4,14);printf("   \\ \\___\\ \\___\\ \\___\\ \\_\\ \\\\ \\_\\ ");
    gotoxy(46,10);set(4,14);printf("    \\|__|\\|__|\\|__|\\||\\|| \\|_|  ");
    gotoxy(47,35);set(0,15);printf("TEKAN Y UNTUK LANJUT >>     << TEKAN T UNTUK KEMBALI");
    gotoxy(72,35);printf("");
    gotoxy(62,30);set(15,10);printf("TEKAN ESC UNTUK KEMBALI");
    while((input = getch()) != 13 || index < 1){
        if(index < 1 && (input == 'y' || input == 'Y' || input == 't' || input == 'T')){
            gotoxy(72+index,35);set(0,15);printf("%c",input);
            tamp = input;
            index++;
        }
        else if(input == 8 && index != 0){
            printf("\b \b");
            index--;
            tamp = '\0';
        }
        else if(input == 27){
            // pilihan();
        }
    }
    if(tamp == 'y' || tamp == 'Y'){
        gotoxy(66,15);set(0,12);printf("");
        gotoxy(66,15);
        username(user);
        gotoxy(66,21);set(0,12);printf("");
        gotoxy(66,21);password(pass);
        FILE* data;
        data = fopen("login.txt","r");
        while(fscanf(data,"%[^#]#%[^\n]\n",&tampuser[index],&tamppass[index]) != EOF){
            if(strcmp(user,tampuser[index]) == 0 && strcmp(pass,tamppass[index]) == 0){
                masuk++;
            }
            index++;
        }
        if(masuk != 0){
            system("cls");
            printf("berhasil");
        }
        else{
            login();
        }
    }
    else{
        // pilihan();
    }
}
void daftarakun(){
    system("cls");
    gotoxy(10,36);printf("Masukan Nama  :");
    gotoxy(11,37);printf("Masukan Alamat :");
    gotoxy(12,38);printf("No hp :");
    gotoxy(10,36);printf("Username :");
    gotoxy(10,36);printf("Password : ");

}

void main(){
    
    welcome();
    // menu();
    // info();
    // booking();
    // login();
   getch();
}

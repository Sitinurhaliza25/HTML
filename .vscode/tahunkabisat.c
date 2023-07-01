#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main()
{
  int a,angka;
 printf(" Input satu angka bulat: ");
  scanf("%d",&a);
 for (int b = 2; b <= a; b++) {
    angka=0;
  for (int c= 2; c<= b /2; c++){
    if (b % c ==0) {
        angka=1;
        break;
  }

      if (angka ==0 && b> 10) {
        printf("%d\n",b);
       
      }
    }
 }

 getch();
}

// int main() {
//  int bilangan;
//     printf("Masukan bilangan : ");
//     scanf("%d",bilangan);
//     for()
// if(bilangan < 10) {
//   printf("bilangan bukan prima ");
//  }
//   if(bilangan >21){
//    printf("%d merupakan bilangan prima.", bilangan);
//   }else{
//     printf("bukan bilangan prima");
//   }
//   getch();
//  }
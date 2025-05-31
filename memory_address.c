#include <stdio.h>

int main(){

    int A = 3;
    int B = 5;
    int C = 8;
    int D = 10;
    int E = 11;
    int F;
    F = B + D;

    printf("+-----------+-----+-----+-----+\n");
    printf("| Address   | Var | Dec | Hex |\n");
    printf("|-----------+-----+-----+-----|\n");
    printf("| %x  | F         | %d  | %X   |\n",&F,F,F);
    printf("| %x  | E         | %d  | %X   |\n",&E,E,E);
    printf("| %x  | D         | %d  | %X   |\n",&D,D,D);
    printf("| %x  | C         | 0%d  | %X   |\n",&C,C,C);
    printf("| %x  | B         | 0%d  | %X   |\n",&B,B,B);
    printf("| %x  | A         | 0%d  | %X   |\n",&A,A,A);
    printf("+-----------+-----+-----+-----+\n");

    return 0;
}


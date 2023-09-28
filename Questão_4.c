#include <stdio.h>

int main() {
    char nivel;
    double salarioinicial, aumento;

    scanf(" %c %lf", &nivel, &salarioinicial); 

    switch (nivel) {
        case 'a':
            aumento = salarioinicial * 0.05;
            break;
        case 'b':
            aumento = salarioinicial * 0.07;
            break;
        case 'c':
            aumento = salarioinicial * 0.08;
            break;

    }

    double novosalario;

    novosalario = salarioinicial + aumento;

    printf("R$ %.2lf\n", novosalario);

    return 0;
}

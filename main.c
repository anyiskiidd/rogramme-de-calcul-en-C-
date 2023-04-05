#include <stdio.h>

// Fonction pour ajouter deux nombres
float add(float num1, float num2) {
    return num1 + num2;
}

// Fonction pour soustraire deux nombres
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Fonction pour multiplier deux nombres
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Fonction pour diviser deux nombres
float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Erreur : Division par zéro\n");
        return 0;
    } else {
        return num1 / num2;
    }
}

int main() {
    int choice, lang_choice;
    float num1, num2, result;
    char lang[3];

    printf("Choisissez la langue (fr pour français, en pour anglais) : ");
    scanf("%s", lang);
    
    if (lang[0] == 'f' || lang[0] == 'F') {
        printf("Bienvenue au programme de calcul.\n\n");
        printf("Choisissez l'opération que vous souhaitez effectuer : \n");
        printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Quitter\n");

        do {
            printf("\nEntrez votre choix : ");
            scanf("%d", &choice);

            if (choice >= 1 && choice <= 4) {
                printf("Entrez le premier nombre : ");
                scanf("%f", &num1);
                printf("Entrez le deuxième nombre : ");
                scanf("%f", &num2);

                switch (choice) {
                    case 1:
                        result = add(num1, num2);
                        printf("La somme de %f et %f est : %f\n", num1, num2, result);
                        break;
                    case 2:
                        result = subtract(num1, num2);
                        printf("La différence de %f et %f est : %f\n", num1, num2, result);
                        break;
                    case 3:
                        result = multiply(num1, num2);
                        printf("Le produit de %f et %f est : %f\n", num1, num2, result);
                        break;
                    case 4:
                        result = divide(num1, num2);
                        if (result != 0) {
                            printf("Le quotient de %f et %f est : %f\n", num1, num2, result);
                        }
                        break;
                    default:
                        printf("Entrez un choix valide.\n");
                }
            } else if (choice == 5) {
                printf("Programme terminé.\n");
            } else {
                printf("Entrez un choix valide.\n");
            }
        } while (choice != 5);
    } else if (lang[0] == 'e' || lang[0] == 'E') {
        printf("Welcome to the calculator program.\n\n");
        printf("Choose the operation you want to perform: \n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");

        do {
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            if (choice >= 1 && choice <= 4) {
                printf("Enter the first number             : ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    printf("The sum of %f and %f is: %f\n", num1, num2, result);
                    break;
                case 2:
                    result = subtract(num1, num2);
                    printf("The difference of %f and %f is: %f\n", num1, num2, result);
                    break;
                case 3:
                    result = multiply(num1, num2);
                    printf("The product of %f and %f is: %f\n", num1, num2, result);
                    break;
                case 4:
                    result = divide(num1, num2);
                    if (result != 0) {
                        printf("The quotient of %f and %f is: %f\n", num1, num2, result);
                    }
                    break;
                default:
                    printf("Enter a valid choice.\n");
            }
        } else if (choice == 5) {
            printf("Program terminated.\n");
        } else {
            printf("Enter a valid choice.\n");
        }
    } while (choice != 5);
} else {
    printf("Langue non prise en charge.\n");
}

return 0;
}

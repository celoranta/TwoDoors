#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play);
    while ((getchar()) != '\n' && (getchar()) != EOF)
        continue;
    
    if (play == 'y') {
        
        printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");
        scanf("%i", &choice);

        char *answer = "Ask either guard to point to the door that the OTHER guard would claim leads to certain death, then walk through the door they point at.\n"; //I'm pretty sure the original text causes each guard to point to a different door and leads to a 50% chance of death...
        switch (choice) {
            case 1:
                printf("%s", answer);
                break;
            case 2:
                printf("%s", answer);
                break;
            case 3:
                printf("%s", answer);
                break;
            default:
                break;
        }
    }
    
    return 1;
}

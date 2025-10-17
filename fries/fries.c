#include <stdio.h>
#include <string.h>

int main() {

    char password[] = "fries";
    char input[20];
    printf("\n\nName: Prince John G. Dinopol\nID Number: 2025303976\n ----------------------\nSecurity Door Locked\n\n\n");
    printf("Enter the password to unlock: ");
    scanf("%19s", input);
    if (strcmp(input, password) != 0) {
        printf("\n\nName: Prince John G. Dinopol\nID Number: 2025303976\n ----------------------\nAccess Denied!\n Please try again.\n ----------------------");
        return 0;
           
        
    }

    printf("\n\nName: Prince John G. Dinopol\nID Number: 2025303976\n ----------------------\nAccess Granted!\nWelcome Home, Master!\n ----------------------");
    return 0;
    
    
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length = 0, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);

    for(int i = 0; i < length; i++) {
        if(isupper(password[i]))
            hasUpper = 1;
        else if(islower(password[i]))
            hasLower = 1;
        else if(isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    printf("\nPassword Analysis:\n");

    if(length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Strong Password ✅\n");
    else if(length >= 6 && (hasUpper || hasLower) && hasDigit)
        printf("Medium Password ⚠️\n");
    else
        printf("Weak Password ❌\n");

    return 0;
}

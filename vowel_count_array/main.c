#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0;
    //vowel a, e, i, o, u
    printf("Enter Any Character Like a,b,c,d,e: ");
    fgets(str, sizeof(str), stdin);  // read input string from user
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
                || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }
    printf("Number of vowels in the Array: %d", vowels);
    return 0;
}

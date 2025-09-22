#include <stdio.h>

int main() {
    char s[256];
    char r[256];
    int i, k = 0;

    printf("Enter the line: ");
    fgets(s, 256, stdin);;

    for (i = 0; s[i] != '\0'; i++) {
        if (i % 2 == 0) {
            r[k] = s[i];
            k++;
        }
    }
    r[k] = '\0';

    printf("%s\n", r);

    return 0;
}

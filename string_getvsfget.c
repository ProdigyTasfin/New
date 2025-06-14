#include <stdio.h>

// Why should we use fget

//What is getc()?

//getc() reads one single character from a file or from stdin. 

//What is fgets()?

// reads a whole line of text (multi-word) at once.

int main(){
    char c;
    c = getc(stdin);   // reads just 1 character from keyboard
    printf("You typed: %c\n", c);

    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("You typed: %s", str);

    return 0;
}

// ✅ Good for reading one letter, one char at a time.

// ❌ Not for reading full words or sentences. 

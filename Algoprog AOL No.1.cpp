#include <stdio.h>
#include <string.h>

void reverseString(char s[]){
    int length = strlen(s);
    for (int i=0; i<length/2; i++) {
        char temp = s[i];
        s[i] = s[length-i-1];
        s[length-i -1] = temp;
    }
}

void convertCase(char s[]) {
    int length = strlen(s);
    for (int i=0; i<length; i++) {
        if (s[i]>='a' && s[i]<='z') {
            s[i]-= 32;
        } else if (s[i]>='A' && s[i]<='Z') {
            s[i]+= 32;
        }
    }
}

int main() {
    char s[101];
    scanf("%[^\n]", s);
    reverseString(s);
    convertCase(s);
    printf("%s\n", s);
    return 0;
}

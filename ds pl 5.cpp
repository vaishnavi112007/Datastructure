#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX][100];
int top = -1;


void push(char page[]) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    strcpy(stack[top], page);
}


void pop() {
    if (top == -1) {
        printf("No previous page!\n");
        return;
    }

    printf("Going back from: %s\n", stack[top]);
    top--;

    if (top >= 0)
        printf("Current page: %s\n", stack[top]);
}


void display() {
    printf("\nBrowser History:\n");

    for (int i = top; i >= 0; i--) {
        printf("%s\n", stack[i]);
    }
}

int main() {

    
    push("Google");
    push("YouTube");
    push("GitHub");
    push("ChatGPT");

    display();

    
    printf("\n--- Back Operation ---\n");
    pop();

    printf("\n--- Back Operation ---\n");
    pop();

    return 0;
}

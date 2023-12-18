/*
Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...
*/
#include <stdio.h>
#include <string.h>

int main() {
    char email1[50];
     char pass1[50];
    
    char email[] = "dhruv123@gmail.com";
    char pass[] = "90334508";

    printf("Enter your email: ");
    scanf("%s",&email);

    printf("Enter your password: ");
    scanf("%s",&pass);

    if (strcmp(email,email1) == 0 && strcmp(pass,pass1) == 0) {
        printf("Login successful");
    } else {
        printf("Invalid email and password");
    }

}

#include<stdio.h>
int main() {
int upper = 0, lower = 0;
char ch[100];
scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */
int i = 0;
while (ch[i] != '\0') {
if (ch[i] >= 'A' && ch[i] <= 'Z')
upper++;
if (ch[i] >= 'a' && ch[i] <= 'z')
lower++;
i++;
}

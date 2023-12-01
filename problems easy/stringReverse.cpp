#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int length(string s)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}
string reverseWord(string str)
{
    string s = "";
    for (int i  = length(str); i >= 0; i--)
    {
        strcat(s, str[i]);
        
    }
    return s;
    // Your code goes here
}
int main()
{

    return 0;
}
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#define 26 mod
 

// Check to see that only one argument is given after ./caesar in int main only
int main(int argc, string argv[])
{
   if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    // Prompt user for a plaintext
    string plaintext = get_string("plaintext: ");





    // Use alphabetical index instead of ASCII to wrap around alphabet
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    char character;




    // Convert string to integer of key e.g. "5" to 5
    int key = atoi(argv[1]);




    // For each character in plaintext string, check if it is an alphabet while preserving case and shift by key
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                character = plaintext[i] - 'A';
                plaintext[i] = upper[(character + key) % mod];
            }
            else
            {
                character = plaintext[i] - 'a';
                plaintext[i] = lower[(character + key) % mod];
            }
        }
    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
}
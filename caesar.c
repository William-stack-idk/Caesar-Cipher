#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Encrypts a given text using a Caesar cipher with a repeating key.
 * 
 * @param key_length Length of the key array.
 * @param key Array of integers representing the encryption key.
 * @param txt The plaintext to encrypt.
 * @return Encrypted ciphertext.
 */
char *encrypt(int key_length, int *key, char *txt){
  int i = 0;
  while(txt[i] != '\0'){
    int j = i%key_length;
    int temp = txt[i] + key[j];
    if(temp > 126)txt[i] = temp - 93;
    else txt[i] = temp;
    i++;
  }
  return txt;
}

/**
 * @brief Decrypts a given text that was encrypted using a Caesar cipher with a repeating key.
 * 
 * @param key_length Length of the key array.
 * @param key Array of integers representing the decryption key.
 * @param txt The ciphertext to decrypt.
 * @return Decrypted plaintext.
 */
char *decrypt(int key_length, int *key, char *txt){
  int i = 0;
  while(txt[i] != '\0'){
    int j = i%key_length;
    int temp = txt[i] - key[j];
    if(temp <= 33)txt[i] = temp + 93;
    else txt[i] = temp;
    i++;
  }
  return txt;
}

/**
 * @brief Main function to handle user input and call encryption or decryption functions.
 * 
 * Usage: caesar [key_length][key] [txt] [-e | -d]
 * Example: ./caesar 3123 welcome -e
 * 
 * @param a Argument count.
 * @param v Argument vector (array of strings).
 * @return int Exit code.
 */
int main(int a, char **v){
  int key_length = v[1][0] - '0';
  int key[key_length];
  for(int i = 1; i<=key_length; i++){
    key[i-1]=v[1][i] - '0';
  }
  if(v[3][1] == 'd') printf("%s", decrypt(key_length, key, v[2]));
  else if(v[3][1] == 'e') printf("%s",encrypt(key_length, key, v[2]));
  return 0;
}

# Caesar Cipher with Repeating Key

This is a simple implementation of a Caesar cipher with a variable key, written in C. It allows for both encryption and decryption of text using a key provided by the user. This project is primarily for learning purposes and demonstrates basic encryption techniques using a substitution cipher with modular arithmetic.

## How It Works

The program takes the following command-line arguments:

- A **key**: This is an integer array of digits that specify the amount by which to shift each character in the text. The key repeats cyclically across the text.
- A **text**: This is the message to be encrypted or decrypted.
- A **flag**: `-e` for encryption and `-d` for decryption.

### Example Usage

```sh
# Encrypt the text "welcome" using the key "3123"
./caesar 3123 welcome -e

# Decrypt the text back to its original form
./caesar 3123 <encrypted_text> -d


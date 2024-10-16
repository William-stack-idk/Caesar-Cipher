# Caesar Cipher with Repeating Key

This program implements a Caesar cipher encryption and decryption mechanism with a repeating key. It shifts the characters in the input text according to the values specified in the key.

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


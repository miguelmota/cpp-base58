#include <string>

#include "base58.cpp"

void encode_example() {
  std::string text = "hello world";
  int len = text.length();
  unsigned char encoded[len * 137 / 100];
  base58encode(text, len, encoded);
  printf("%s", encoded); // "StV1DL6CwTryKyV"
}

void decode_example() {
  std::string encoded = "StV1DL6CwTryKyV";
  int len = encoded.length();
  unsigned char text[len * 137 / 100];
  base58decode(encoded, len, text);
  printf("%s", text); // "hello world"
}

int main() {
  encode_example();

  printf("\n");

  decode_example();

  return 0;
}

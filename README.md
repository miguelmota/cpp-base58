# base58

> [Base58](https://en.wikipedia.org/wiki/Base58) encoding/decoding example in C++

## Examples

Text string to base58 string

```cpp
#include <string>

#include "base58.cpp"

int main() {
  std::string text = "hello world";
  int len = text.length();
  unsigned char encoded[len * 137 / 100];
  base58encode(text, len, encoded);
  printf("%s", encoded); // "StV1DL6CwTryKyV"

  return 0;
}
```

Base58 string to decoded text string

```cpp
#include <string>

#include "base58.cpp"

int main() {
  std::string encoded = "StV1DL6CwTryKyV";
  int len = encoded.length();
  unsigned char text[len * 137 / 100];
  base58decode(encoded, len, text);
  printf("%s", text); // "hello world"

  return 0;
}
```

## License

MIT

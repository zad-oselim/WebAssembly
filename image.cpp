#include <cstdint>

extern "C" {
  void to_grayscale(uint8_t* data, int width, int height) {
    for (int i = 0; i < width * height * 4; i += 4) {
      uint8_t r = data[i];
      uint8_t g = data[i + 1];
      uint8_t b = data[i + 2];
      uint8_t gray = (r + g + b) / 3;

      data[i] = gray;
      data[i + 1] = gray;
      data[i + 2] = gray;
    }
  }
}


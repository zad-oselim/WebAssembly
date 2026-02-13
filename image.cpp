#include <cstdint>

extern "C" {
  // هذه الدالة ستستقبل مصفوفة من البكسلات
  // كل 4 عناصر تمثل بكسل واحد (Red, Green, Blue, Alpha)
  void to_grayscale(uint8_t* data, int width, int height) {
    for (int i = 0; i < width * height * 4; i += 4) {
      // استخراج قيم الألوان
      uint8_t r = data[i];
      uint8_t g = data[i + 1];
      uint8_t b = data[i + 2];

      // حساب متوسط قيمة السطوع (طريقة بسيطة)
      uint8_t gray = (r + g + b) / 3;

      // تطبيق القيمة الجديدة على كل القنوات اللونية
      data[i] = gray;
      data[i + 1] = gray;
      data[i + 2] = gray;
      // قناة الشفافية (Alpha) تبقى كما هي
    }
  }
}


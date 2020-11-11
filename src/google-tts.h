#ifndef GoogleTTS_h
#define GoogleTTS_h

#include <Arduino.h>

#ifdef ARDUINO_ARCH_ESP8266
#include "esp8266sdk_version.h"
#endif

typedef class GoogleTTS {

private:
  String urlencode(String str);
  
public:
  String getSpeechUrl(String text, String lang);
  String getSpeechUrl(String text) {
    return getSpeechUrl(text, "en");
  }
} TTS;

#endif

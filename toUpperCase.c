// toUpperCase.c
#include <emscripten/emscripten.h>
#include <ctype.h>
#include <string.h>

// JavaScriptから呼び出せる関数としてエクスポート
EMSCRIPTEN_KEEPALIVE
char* toUpperCase(char* input) {
    static char buffer[256]; // 大きさは必要に応じて調整
    strcpy(buffer, input);
    for (int i = 0; buffer[i]; i++) {
        buffer[i] = toupper((unsigned char) buffer[i]);
    }
    return buffer;
}

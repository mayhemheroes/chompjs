#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../_chompjs/buffer.h"
#include "../_chompjs/parser.h"

char buf[8196];

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
    memcpy(buf, Data, Size);
    buf[Size + 1] = 0;

    struct Lexer lexer;
    init_lexer(&lexer, buf);

    // Force a larger output buffer
    release_char_buffer(&lexer.output);
    init_char_buffer(&lexer.output, 8196); 

    while(lexer.lexer_status == CAN_ADVANCE) {
        advance(&lexer);
    }

    release_lexer(&lexer);
    return 0;
}
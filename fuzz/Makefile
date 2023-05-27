chompjs-fuzz: chompjs-fuzz.c
	clang -g -fsanitize=fuzzer -o chompjs-fuzz chompjs-fuzz.c ../_chompjs/buffer.c ../_chompjs/parser.c 
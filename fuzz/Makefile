chompjs-fuzz: chompjs-fuzz.c
	clang -g -fsanitize=fuzzer,undefined -o chompjs-fuzz chompjs-fuzz.c ../_chompjs/buffer.c ../_chompjs/parser.c 
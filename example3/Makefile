default: example3.s example3

example3.s: example3.c
	gcc -w -S -fno-stack-protector -m32 -zexecstack -o example3.s example3.c

example3: example3.c
	gcc -w -fno-stack-protector -m32 -zexecstack -o example3 example3.c


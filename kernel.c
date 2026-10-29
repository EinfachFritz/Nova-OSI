/* NOVA OS: tiny educational kernel */
void kernel_main(void)
{
    volatile unsigned short *screen =
        (volatile unsigned short *)0xB8000;
    const char *message = "Hello from NOVA OS!";
    unsigned int i = 0;

    while (message[i] != '\0') {
        screen[i] = (unsigned short)message[i] | 0x0F00;
        i++;
    }

    /*
     * QEMU's isa-debug-exit device uses port 0xF4.
     * Writing 0x10 causes QEMU to exit with code 33,
     * which the GitHub Actions boot test treats as success.
     */
    __asm__ volatile (
        "outb %0, %1"
        :
        : "a"((unsigned char)0x10),
          "Nd"((unsigned short)0xF4)
    );

    for (;;) {
        __asm__ volatile ("hlt");
    }
}

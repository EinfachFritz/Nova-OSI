

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

    for (;;) {
        __asm__ volatile ("hlt");
    }
}

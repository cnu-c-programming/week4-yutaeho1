    #include <stdio.h>
    
    void swap_endians(int *x) {

        char *ptr = (char *)x;
        char temp;

        temp = ptr[0];
        ptr[0] = ptr[3];    //[0] = 0x12
        ptr[3] = temp;      //[3] = 0x78

        temp = ptr[1];
        ptr[1] = ptr[2];    //[1] = 0x34
        ptr[2] = temp;      //[2] = 0x56
    }

    int main() {
        int x = 0x12345678;

        printf("%x\n", x);
        swap_endians(&x);
        printf("%x\n", x);

        return 0;
    }

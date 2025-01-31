
        #include <cpuid.h>
        int main(void)
        {
            unsigned int eax, ebx, ecx, edx;
            __get_cpuid(1, &eax, &ebx, &ecx, &edx);
            return 0;
        }
        
#include <stdio.h>

int main() {
    printf("Language Standards\n");
#ifdef __STDC__
    printf("__STDC__: %d\n", __STDC__);
#endif
#ifdef __STDC_VERSION__
    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);
#endif
#ifdef __cplusplus
    printf("__cplusplus: %d\n", __cplusplus);
#endif

    printf("Compilers\n");
#ifdef __clang__
    printf("__clang__: %d\n", __clang__);
    printf("__clang_major__: %d\n", __clang_major__);
    printf("__clang_minor__: %d\n", __clang_minor__);
    printf("__clang_patchlevel__: %d\n", __clang_patchlevel__);
#endif
#ifdef __GNUC__
    printf("__GNUC__: %d\n", __GNUC__);
    printf("__GNUC_MINOR__: %d\n", __GNUC_MINOR__);
    printf("__GNUC_PATCHLEVEL__: %d\n", __GNUC_PATCHLEVEL__);
#endif
#ifdef __llvm__
    printf("__llvm__: %d\n", __llvm__);
#endif

    printf("Operating Systems\n");
#ifdef __gnu_linux__
    printf("__gnu_linux__: %d\n", __gnu_linux__);
#endif
#ifdef __linux__
    printf("__linux__: %d\n", __linux__);
#endif
#ifdef __APPLE__
    printf("__APPLE__: %d\n", __APPLE__);
#endif
#ifdef __MACH__
    printf("__MACH__: %d\n", __MACH__);
#endif
#ifdef __unix__
    printf("__unix__: %d\n", __unix__);
#endif
#ifdef __unix
    printf("__unix: %d\n", __unix);
#endif

    printf("Architectures\n");
#ifdef __amd64__
    printf("__amd64__: %d\n", __amd64__);
#endif
#ifdef __amd64
    printf("__amd64: %d\n", __amd64);
#endif
#ifdef __x86_64__
    printf("__x86_64__: %d\n", __x86_64__);
#endif
#ifdef __x86_64
    printf("__x86_64: %d\n", __x86_64);
#endif

    return 0;
}

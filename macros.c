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
#ifdef __INTEL_COMPILER
    printf("__INTEL_COMPILER: %d\n", __INTEL_COMPILER);
    printf("__INTEL_COMPILER_BUILD_DATE: %d\n", __INTEL_COMPILER_BUILD_DATE);
#endif
#ifdef __llvm__
    printf("__llvm__: %d\n", __llvm__);
#endif
#ifdef __MINGW32__
    printf("__MINGW32__: %d\n", __MINGW32__);
#endif
#ifdef __MINGW64__
    printf("__MINGW64__: %d\n", __MINGW64__);
#endif
#ifdef __SUNPRO_C
    printf("__SUNPRO_C: %#x\n", __SUNPRO_C);
#endif
#ifdef __SUNPRO_CC
    printf("__SUNPRO_CC: %#x\n", __SUNPRO_CC);
#endif

    printf("Libraries\n");
#ifdef __GLIBC__
    printf("__GLIBC__: %d\n", __GLIBC__);
    printf("__GLIBC_MINOR__: %d\n", __GLIBC_MINOR__);
#endif

    printf("Operating Systems\n");
#ifdef __DragonFly__
    printf("__DragonFly__: %d\n", __DragonFly__);
#endif
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
#ifdef __NetBSD__
    printf("__NetBSD__: %d\n", __NetBSD__);
#endif
#ifdef __OpenBSD__
    printf("__OpenBSD__: %d\n", __OpenBSD__);
#endif
#ifdef sun
    printf("sun: %d\n", sun);
#endif
#ifdef __sun
    printf("__sun: %d\n", __sun);
#endif
#ifdef __unix__
    printf("__unix__: %d\n", __unix__);
#endif
#ifdef __unix
    printf("__unix: %d\n", __unix);
#endif
#ifdef _WIN32
    printf("_WIN32: %d\n", _WIN32);
#endif
#ifdef _WIN64
    printf("_WIN64: %d\n", _WIN64);
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

    printf("Data Models\n");
    printf("sizeof(int): %ld\n", (long) sizeof(int));
    printf("sizeof(long): %ld\n", (long) sizeof(long));
    printf("sizeof(void *): %ld\n", (long) sizeof(void *));
    printf("sizeof(size_t): %ld\n", (long) sizeof(size_t));
#ifdef __LP64__
    printf("__LP64__: %d\n", __LP64__);
#endif
#ifdef __ILP32__
    printf("__ILP32__: %d\n", __ILP32__);
#endif

    return 0;
}

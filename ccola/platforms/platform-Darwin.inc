set(CCOLA_ARCH_FAMILY bsd)
set(CCOLA_ARCH bsd)
set(CCOLA_CORE none)
set(CCOLA_PROCESSOR_FAMILY x86)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(CCOLA_PROCESSOR x86_64)
else() 
    set(CCOLA_PROCESSOR x86)
endif()
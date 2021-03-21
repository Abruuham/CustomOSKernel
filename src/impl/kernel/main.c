#include "print.h"
#include "math.h"

void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to my 64-bit kernel!\n");
    
    int result = add(2, 2);
    print_str("The answer to 2 + 2 is: ");
    print_int(result);

}
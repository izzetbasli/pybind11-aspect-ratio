#include "cpp_library/sublibA/aspect_ratio.h"

double cpp_library::sublibA::aspect_ratio(int width, int height){
    double aspect = (double)width / height;
    return aspect;
}
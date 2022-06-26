#include "cpp_library/sublibA/add.h"
#include "cpp_library/sublibA/multiply.h"
#include "cpp_library/sublibA/aspect_ratio.h"

#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>


namespace py = pybind11;

PYBIND11_MODULE(_core, m)
{
  auto sublibA = m.def_submodule("sublibA");
  sublibA.def("add", cpp_library::sublibA::add);
  sublibA.def("multiple", cpp_library::sublibA::multiple);
  sublibA.def("aspect_ratio", cpp_library::sublibA::aspect_ratio);
}
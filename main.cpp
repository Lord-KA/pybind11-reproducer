#include <pybind11/stl.h>
#include <pybind11/pybind11.h>
#include <pybind11/embed.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

int main()
{
    py::scoped_interpreter guard{};

    py::module_ m = py::module_::import("module");
}

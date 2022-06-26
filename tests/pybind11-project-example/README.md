# Pybind11 Example Project

An example of C++ project with pybind11 bindings

It can be used as a C++ python module template.

## Project layout
--------------


- ./include/cpp_library/     # includes (.h) of C++ project 
- ./src/                     # sources (.cpp) of C++ project 
- ./cpp_library_bindings/    # pybind11 bindings of C++ project 
- ./external/                # root for 3rd party libraries sources (pybind11, eigen, etc.)


## Install python
--------------

```bash
cd test/pybind11-project-example
python -m venv myenv
source myenv/bin/activate
python  setup.py install --force # regular python install is working
cd ..
chmod +x ./run_test.sh
./run_test.sh
```
## Test Pytho Script

go main directory
```bash
python pybind_test.py
```
Output 
```bash
15
30
1.4222222222222223
```

# pybind11 in embedded mode cannot find any locally installed modules
```bash
 ubuntu  pybind11-reproducer/build   master  python3 ../module.py 
1
2
3
 ubuntu  pybind11-reproducer/build   master  cmake .. && make -j                                                          
...
[ 50%] Building CXX object CMakeFiles/main.dir/main.cpp.o
[100%] Linking CXX executable main
[100%] Built target main
 ubuntu  pybind11-reproducer/build   master  export PYTHONPATH=..                                                                                  
 ubuntu  pybind11-reproducer/build   master  ./main              
terminate called after throwing an instance of 'pybind11::error_already_set'
  what():  ModuleNotFoundError: No module named 'numpy'

At:
  /home/ubuntu/tmp/pybind11-reproducer/module.py(1): <module>
  <frozen importlib._bootstrap>(241): _call_with_frames_removed
  <frozen importlib._bootstrap_external>(883): exec_module
  <frozen importlib._bootstrap>(703): _load_unlocked
  <frozen importlib._bootstrap>(1006): _find_and_load_unlocked
  <frozen importlib._bootstrap>(1027): _find_and_load

[1]    605104 IOT instruction (core dumped)  ./main
```

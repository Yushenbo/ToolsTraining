
Directories Scope

    .
    |---CMakelists.txt
    |---inc
    |   |--- pow.h
    |
    |---src
        |--- main.c
        |--- pow.c


How to compiler

    mkdir -p build
    cd build

    --for MinGW Env
        cmake .. -G "MSYS Makefiles"
    --for Linux Env
        cmake ..

    make 

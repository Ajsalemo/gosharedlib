# gosharedlib
Using `.so`'s with Go - building with Go, C and `cgo`

A small program that writes the local current time in a 24hour format to the terminal. This Go application uses `cgo` to invoke a shared library (`libchecktime.so`). The `/c` folder contains relevant C source code for `checktime`

- Usage: `LD_LIBRARY_PATH=./c go run .`
- Output example: `Current local time: 11:37:31`
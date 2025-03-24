package main

/*
#cgo LDFLAGS: -L./c -lchecktime
#include "./c/checktime.h"
*/
import "C"
import "fmt"

func main() {
	fmt.Print(C.checktime())
}

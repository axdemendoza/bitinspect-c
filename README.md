# bitinspect-c

**bitinspect-c** is a command-line tool written in C for inspecting raw file contents at the byte and bit level.  
It provides hex output, binary representations of each byte, and byte frequency analysis.

This is a personal project to build stronger systems programming fundamentals and prepare for my upcoming CS:APP course at the University of Chicago.

---

## Status

🚧 This project is currently in progress.

---

## Planned Features

- Hexdump-style output (offset, hex bytes, ASCII view)
- Bit-level representation of each byte
- Byte frequency statistics
- Clean CLI interface with argument parsing
- Makefile-based build system
- Valgrind-clean memory usage

---

## Build

```bash
make bitinspect
```

## Usage (in progress)

```bash
./bitinspect <file>
```

## Goals
- Write portable C (C11) with no compiler warnings
- Practice working with raw bytes and file streams
- Build clean, modular code with header/source separation
- Develop habits around testing and debugging (valgrind, etc.)

## Notes

This is a personal project built to strengthen systems programming fundamentals and prepare for deeper work in low-level and performance-oriented programming.

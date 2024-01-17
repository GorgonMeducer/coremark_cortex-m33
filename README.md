# CoreMark for Cortex-m33(MPS2 AN505)
This is a CoreMark project for Cortex-M33 comparing compilers such as gcc, llvm and arm compiler 6.



## Test Environment

### Platform

- Core: **Cortex-M33**

* System Frequency: **20MHz**

* Memory (0 wait state)
  * CODE SRAM: **4MByte**
  * DATA SRAM: **4MByte**



### Toolchain

- [Arm Compiler 6.21](https://developer.arm.com/tools-and-software/embedded/arm-compiler/downloads/version-6)
  - microLib

- [Arm GCC 10.3-2021.10](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
  - -lc_nano -lnosys

- [LLVM Embedded toolchain for Arm (LLVM 13)](https://github.com/ARM-software/LLVM-embedded-toolchain-for-Arm/releases)
  - -lc_nano -lnosys




## Test Results

| Coremark         | AC6.21                    | LLVM | GCC     | Note                                                         |
| ---------------- | ------------------------- | ---- | ------- | ------------------------------------------------------------ |
| Best Performance | 3.97<br />ROM Size: 29514 |      | 3.34384 | AC6: -Omax +lto;<br />GCC: -Ofast +lto;<br />LLVM uses: -Ofast+lto |
| -Ofast           | 3.36<br />ROM Size: 25610 |      | 3.46774 |                                                              |
| -Ofast+lto       | 3.41<br />ROM Size: 23594 |      | 3.34384 |                                                              |
| -O3              |                           |      | 3.39595 |                                                              |
| Best Size        |                           |      |         | AC6: -Omin +lto;<br />GCC: -Os +lto;<br />LLVM: -Oz+lto      |
| -Oz              |                           |      |         | GCC: -Os                                                     |
| -Oz+lto          |                           |      |         | GCC: -Os + lto                                               |
| -Os              |                           |      | n/a     |                                                              |
| -Os+lto          |                           |      | n/a     |                                                              |


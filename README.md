# Hello World in LAMMPS

In this repository, some work has been done to partially implement a LAMMPS [fix](https://docs.lammps.org/fix.html) called `msse`.
You can see the relevant changes [here](https://github.com/Chem281Materials/2-3_lammps_fix/commit/acf7f2c2c6bef6314aee3628ab5db3965619f389)
Update the repository to allow the `msse` fix to be usable, and to print `Hello World!` every timestep that LAMMPS runs.
The `msse` fix should be built as a [LAMMPS Package](https://docs.lammps.org/Packages.html) when LAMMPS is configured with a `-D PKG_MSSE=yes` flag.
For example:

```bash
cmake -D PKG_RIGID=yes -D PKG_MOLECULE=yes -D PKG_KSPACE=yes -D PKG_MSSE=yes ../cmake
```

You should check how other LAMMPS packages, such as `KSPACE`, are integrated into the LAMMPS CMake configuration process in order to do this properly.

To make things easier, you can use the `run.sh` and `run.bat` scripts, which will launch an interactive development image that has everything you need to build and run LAMMPS.
In addition, the `msse_test` subdirectory contains input files for running a quick test calculation.
You can run the test by executing the `test.sh` script, or by executing `<path_to_lmp_executable> -in lammps.in` inside this directory.


In the Answers section below, provide a 2-3 paragraph description of what you have learned about LAMMPS.
In particular:

1. Explain how your fix causes "Hello World!" to be printed every timestep.
2. From a software engineering standpoint, what are some appealing features of the "fix" concept, as implemented in LAMMPS?
3. At a basic level, how do "LAMMPS Packages" fit into LAMMPS' overall CMake configuration strategy?

## Hints

There is very little work that actually needs to be done to solve this problem, but you may need to spend a fair bit of time examining how LAMMPS is structured in order to understand exactly what it is that you need to do.
You can try reading the LAMMPS documentation, examining existing parts of the code, and experimenting with things yourself.

You may find the following line useful:

```c++
  utils::logmesg(lmp,"Hello World!\n");
```

## Answers


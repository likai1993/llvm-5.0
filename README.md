# llvm-5.0 Usage:
We use here the command-line, non-interactive CMake interface.

Download and install CMake. Version 3.4.3 is the minimum required.

Open a shell. Your development tools must be reachable from this shell through the PATH environment variable.

Create a build directory. Building LLVM in the source directory is not supported. cd to this directory:

$ mkdir mybuilddir
$ cd mybuilddir
Execute this command in the shell replacing path/to/llvm/source/root with the path to the root of your LLVM source tree:

$ cmake path/to/llvm/source/root
CMake will detect your development environment, perform a series of tests, and generate the files required for building LLVM. CMake will use default values for all build parameters. See the Options and variables section for a list of build parameters that you can modify.

This can fail if CMake can’t detect your toolset, or if it thinks that the environment is not sane enough. In this case, make sure that the toolset that you intend to use is the only one reachable from the shell, and that the shell itself is the correct one for your development environment. CMake will refuse to build MinGW makefiles if you have a POSIX shell reachable through the PATH environment variable, for instance. You can force CMake to use a given build tool; for instructions, see the Usage section, below.

After CMake has finished running, proceed to use IDE project files, or start the build from the build directory:

$ cmake --build .
The --build option tells cmake to invoke the underlying build tool (make, ninja, xcodebuild, msbuild, etc.)

The underlying build tool can be invoked directly, of course, but the --build option is portable.

After LLVM has finished building, install it from the build directory:

$ cmake --build . --target install
The --target option with install parameter in addition to the --build option tells cmake to build the install target.

It is possible to set a different install prefix at installation time by invoking the cmake_install.cmake script generated in the build directory:

$ cmake -DCMAKE_INSTALL_PREFIX=/tmp/llvm -P cmake_install.cmake


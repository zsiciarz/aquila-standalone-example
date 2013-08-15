Purpose
-------

This is an example of how to use CMake to build C++ executables
that link to [Aquila DSP library](http://aquila-dsp.org/).

Prerequisites
-------------

Download, compile and install the library as
[described here](http://aquila-dsp.org/download/). On Linux, this usually
creates a static library `libAquila.a` and installs it to `/usr/local/lib/`.
When installing on Windows, set `CMAKE_INSTALL_PREFIX` to a directory where
you want Aquila to be installed. This root path will be required later.

Building and running the example
--------------------------------

First, get the source code of the example from GitHub. Following the best
practices, we will also create a separate directory for out-of-source build:

    git clone git://github.com/zsiciarz/aquila-standalone-example.git
    mkdir build
    cd build

Next steps differ a little, depending on your operating system.

On Linux the following should *just work*:

    cmake ../aquila-standalone-example
    make
    ./Aquila_example

On Windows we need to be explicit wih regard to the location of library.
The way to do this is by setting CMake variable called `AQUILA_ROOT` when
invoking cmake. Replace the ellipsis in the following example with the root
path of your Aquila installation:

    cmake ..\aquila-standalone-example -G "MinGW Makefiles" -DAQUILA_ROOT="..."
    mingw32-make
    Aquila_example.exe

If all goes well, you should see a textual "plot" of a sine wave as a proof
that the example has been built, linked and run correctly.

Author
------

 * [Zbigniew Siciarz](http://siciarz.net) (zbigniew at siciarz dot net)

License
-------

This work is released under the MIT license. A copy of the license is provided in the LICENSE file.

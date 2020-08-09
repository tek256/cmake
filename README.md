# Usage

Make sure you have cmake installed, you can download it from their [website here](https://cmake.org/download/).

To setup the project, run:

```cmake 
cmake -Bbuild -S.
``` 

You can specify a generator with the `-G` flag, for example, Ninja: `-GNinja`.

To compile / recompile the project, run:
```cmake
cmake --build build
```


### Generators

You can find the generators available to your machine by typing 
```cmake
cmake -G
```

Most generators work with the `-GXXXX` format, however not all are going to from my experience.
The alternative is to do the following format:
```cmake
cmake -G "MinGW Makefiles"
```

You can read more about the generators in cmake [here in the documentation](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html)!


### Ninja

I have a personal preference to using Ninja on all my systems since it seems to be significantly faster than most others. The downside is that you have to install Ninja. You can download Ninja from its [GitHub Releases Page](https://github.com/ninja-build/ninja/releases). Most package managers in Linux & Mac have Ninja, so check there. For Windows and manual installs, you'll have to make sure that it's included in your system path. 

[![Build Status][travis_img]][travis]

[CProver Wiki](http://www.cprover.org/wiki)

About
=====

Musketeer is a tool to automatically insert memory fences to prevent undesired weakenings of memory consistency between threads. 

For full information see [cprover.org](http://www.cprover.org/wmm/musketeer/).

Prerequisites
============

Musketeer compiles CBMC as part of its build process and as such has all the pre-requisites of CBMC. These can be viewed at: [diffblue/cbmc:COMPILING](http://github.com/diffblue/cbmc/blob/master/COMPILING)

Compilation
===========

To compile you need to run two commands:

```bash
make -C src setup-cbmc
make -C src CXXFLAGS="-Wall -O2 -g -Werror -Wno-deprecated-register -pedantic -Wno-sign-compare"
```

The first make command will configure the CBMC submodule (found in lib/cbmc). It can optionally be provided with a list of users forks to retrieve. This is  needed if changes depend on a commit that has not yet been merged into
diffblue/cbmc.

For example, if you need userA and userB's forks the first command would be:

```bash
make -C src USERS="userA userB" setup-cbmc
```

It is recommend to add your fork in this way.

Output
======

Compiling produces an executable called musketeer which by default can be found in `src/musketeer/musketeer`

Report bugs
===========

If you encounter a problem please file a bug report:
* Create an [issue](https://github.com/diffblue/musketeer/issues)

Contributing to the code base
=============================

1. Fork the repository
2. Clone the repository `git clone git@github.com:YOURNAME/musketeer.git`
3. Create a branch from the `develop` branch (default branch)
4. Make your changes (follow the [coding guidelines](https://github.com/diffblue/cbmc/blob/develop/CODING_STANDARD.md))
5. Push your changes to your branch
6. Create a Pull Request targeting the `develop` branch

License
=======
4-clause BSD license, see `LICENSE` file.

Authors
=======
Jade Alglave,
Daniel Kroening,
Vincent Nimal,
Daniel Poetzl

[travis]: https://travis-ci.org/diffblue/musketeer
[travis_img]: https://travis-ci.org/diffblue/musketeer.svg?branch=master

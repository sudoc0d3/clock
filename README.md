# A simple terminal clock in c
*I'll maybe call stc pronounced 'stissy'!*

### Why
- Trying to build a strong grasp of low level programming in general
- I love minimalism, simplicity, and owning the code I run on my system
- Training on git and writing documentation
- Just playing around with c

### Installation
```bash
git clone https://github.com/sudoc0d3/clock.git 
cd clock 
gcc -o clock clock.c 
# don't run the next line except if you understand what you are doing
sudo cp clock /usr/bin/ 
```
##### Assumptions
- You are using a POSIX-compliant (\*nix-based) system
- You already have `gcc` installed on your system

### Usage
```man
clock mode [hours] [minutes] [seconds]
mode 1: stopwatch
mode 0: timer
```

### Tools in this software
- internet *without chatgpt at all; I am avoiding it to strongly learn*
- POSIX-compliant (\*nix-based) system
- c language
- man pages
- neovim
- gcc
- git

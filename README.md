# C Synth

A music synthesizer in C.

# Dependencies

Linux:
```sh
apt-get install build-essential
```

OS X: (Homebrew)
```
brew cask install xquartz
brew install mplayer
```

# Compiling

gcc -o synth -x c synth.c

# Usage

Linux:

```sh
./synth 220 </dev/urandom | aplay -d 3
```

OS X:
```sh
./synth 220 </dev/urandom | mplayer -cache 1024 -quiet -rawaudio samplesize=1:channels=1:rate=8000 -demuxer rawaudio -
```

# Arduino C2 Interface for SiLabs BB EFM8 MCUs
> C2 interface to erase, flash and read EFM8 MCUs.

## Prerequisites
HEX files for supported Arduinos are available in the [release section](https://github.com/bird-sanctuary/arduino-c2-interface/releases). If your Arduino is not supported, you can build manually using [Platform IO](https://platformio.org/) or the [Platform IO plugin for VSCode](https://platformio.org/install/ide?install=vscode).

## Pinout
For Arduino Uno use the following pinout:

| Function | Pin |
|----------|-----|
| D        | 2   |
| CK       | 3   |

### Installing python EFM8 client
use pipenv to create an virtual env, install dependencies and enter the env:
```
pipenv install
pipenv shell
```

then run the client like so (assuming `/dev/ttyUSB0` is your Arduino):

```
python efm8.py read /dev/ttyUSB0 output.hex
python efm8.py write /dev/ttyUSB0 input.hex
python efm8.py erase /dev/ttyUSB0
```

## Compatibility
This should work on any Arduino Uno or clone running at 16MHz. It should also work with other Arduinos like Nano - unfortunately I can not test that, if you did, please let me know, I can then provide HEX files for future users.

## Resources
* [SiLabs C2 Application note](https://www.silabs.com/documents/public/application-notes/AN127.pdf)

## Contributions
Contributions are very welcome. Feel free to submit a PR against the develop branch. If you have any questions or feature requests, feel free to [open an issue](https://github.com/bird-sanctuary/arduino-c2-interface/issues).

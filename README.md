![PicoFlasher logo](https://raw.githubusercontent.com/X360Tools/PicoFlasher/master/picoflasher.png)

# PicoFlasherTT2

Open source XBOX 360 NAND flasher firmware for the Waveshare RP2040 Tiny, edited from:
https://codeberg.org/hax360/PicoFlasher/

## Wiring:

### Nand Flash or eMMC

| Pico  | Xbox           |
| ----- | -------------- |
| GP0   | SPI_MISO       |
| GP1   | SPI_SS_N       |
| GP2   | SPI_CLK        |
| GP3   | SPI_MOSI       |
| GP4   | SMC_DBG_EN     |
| GP5   | SMC_RST_XDK_N  |
| GND   | GND            |

### Kernel Debug UART

| Pico            | Xbox          |
| --------------- | ------------- |
| GP12 (UART0_TX) | KER_DBG_RXD   |
| GP13 (UART0_RX) | KER_DBG_TXD   |

### SMC Debug UART

There is a second debug UART in the Southbridge that can be used by the SMC firmware to read/write bytes.
On most Retail PCBs only the TX pin is actually wired to to the debug headers, but RX can be accessed with
some modifications.
For simple debug output from SMC firmware, it is enough to only wire up SMC_DBG_TXD.

| Pico           | Xbox          |
| ---------------| ------------- |
| GP8 (UART1_TX) | SMC_DBG_RXD   |
| GP9 (UART1_RX) | SMC_DBG_TXD   |

### ISD12xx Audible Feedback IC

| Signal   | Pico | Trinity | Corona   |
| -------- | ---- | ------- | -------- |
| SPI_RDY  | GP14 | FT2V4   | J2C2-A10 |
| SPI_MISO | GP15 | FT2R7   | J2C2-B11 |
| SPI_SS_N | GP26 | FT2R6   | J2C2-A11 |
| SPI_CLK  | GP27 | FT2T4   | J2C2-A8  |
| SPI_MOSI | GP28 | FT2T5   | J2C2-B8  |

## Acknowledgements

- balika011 for the original PicoFlasher
- 15432 for eMMC SPI support

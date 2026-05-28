/*
 * Copyright (c) 2022 Balázs Triszka <balika011@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PINS_H__
#define __PINS_H__

// KER_DBG
#define UART0_TX 12
#define UART0_RX 13

// SMC_DBG
#define UART1_TX 8
#define UART1_RX 9

#define SPI_MISO 0
#define SPI_SS_N 1
#define SPI_CLK 2
#define SPI_MOSI 3
#define SMC_DBG_EN 4
#define SMC_RST_XDK_N 5

#define NUVOTON_SPI_RDY 14 // FT2V4
#define NUVOTON_SPI_MISO 15 // FT2R7
#define NUVOTON_SPI_SS_N 26 // FT2R6
#define NUVOTON_SPI_CLK 27 // FT2T4
#define NUVOTON_SPI_MOSI 28 // FT2T5

#endif

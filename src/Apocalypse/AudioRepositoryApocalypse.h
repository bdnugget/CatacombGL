// Copyright (C) 2019 Arno Ansems
// 
// This program is free software: you can redistribute it and/or modify 
// it under the terms of the GNU General Public License as published by 
// the Free Software Foundation, either version 3 of the License, or 
// (at your option) any later version. 
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
// GNU General Public License for more details. 
// 
// You should have received a copy of the GNU General Public License 
// along with this program.  If not, see http://www.gnu.org/licenses/ 

//
// AudioRepositoryApocalypse
//
// Data structures required for reading the Catacomb Apocalypse audio repository.
//
#pragma once

#include "../Engine/AudioRepository.h"
#include <vector>

const huffmanTable audioDictionaryApocalypse =
{
    { 171, 173 },
    { 256, 175 },
    { 257, 185 },
    { 258, 206 },
    { 259, 213 },
    { 260, 215 },
    { 261, 217 },
    { 262, 220 },
    { 263, 222 },
    { 264, 231 },
    { 265, 238 },
    { 266, 248 },
    { 267, 250 },
    { 268, 252 },
    { 269, 253 },
    { 270, 254 },
    { 271, 87 },
    { 272, 189 },
    { 224, 227 },
    { 229, 234 },
    { 247, 273 },
    { 194, 199 },
    { 208, 218 },
    { 274, 275 },
    { 230, 251 },
    { 89, 201 },
    { 210, 221 },
    { 225, 233 },
    { 236, 276 },
    { 187, 277 },
    { 203, 278 },
    { 214, 216 },
    { 279, 280 },
    { 237, 161 },
    { 166, 219 },
    { 226, 232 },
    { 281, 134 },
    { 143, 282 },
    { 283, 284 },
    { 243, 94 },
    { 124, 133 },
    { 113, 140 },
    { 145, 154 },
    { 169, 285 },
    { 202, 286 },
    { 287, 288 },
    { 82, 131 },
    { 147, 190 },
    { 204, 209 },
    { 289, 246 },
    { 126, 129 },
    { 152, 290 },
    { 195, 223 },
    { 291, 245 },
    { 73, 78 },
    { 120, 141 },
    { 159, 164 },
    { 168, 192 },
    { 196, 200 },
    { 205, 211 },
    { 59, 292 },
    { 101, 121 },
    { 293, 174 },
    { 191, 197 },
    { 294, 54 },
    { 96, 110 },
    { 176, 193 },
    { 295, 13 },
    { 61, 108 },
    { 117, 296 },
    { 142, 157 },
    { 8, 12 },
    { 106, 130 },
    { 244, 24 },
    { 71, 297 },
    { 127, 136 },
    { 298, 299 },
    { 188, 300 },
    { 212, 301 },
    { 55, 93 },
    { 144, 151 },
    { 160, 186 },
    { 249, 19 },
    { 75, 302 },
    { 100, 115 },
    { 138, 303 },
    { 304, 235 },
    { 305, 255 },
    { 66, 68 },
    { 92, 104 },
    { 137, 149 },
    { 165, 172 },
    { 177, 28 },
    { 53, 99 },
    { 116, 306 },
    { 307, 308 },
    { 309, 239 },
    { 241, 7 },
    { 37, 70 },
    { 91, 107 },
    { 36, 310 },
    { 88, 95 },
    { 311, 155 },
    { 312, 313 },
    { 314, 315 },
    { 45, 58 },
    { 60, 86 },
    { 98, 114 },
    { 119, 146 },
    { 9, 316 },
    { 77, 80 },
    { 317, 112 },
    { 125, 318 },
    { 158, 319 },
    { 111, 135 },
    { 153, 182 },
    { 320, 64 },
    { 321, 109 },
    { 167, 322 },
    { 132, 162 },
    { 170, 323 },
    { 31, 324 },
    { 103, 325 },
    { 123, 326 },
    { 44, 51 },
    { 69, 74 },
    { 228, 327 },
    { 23, 29 },
    { 62, 328 },
    { 72, 329 },
    { 27, 65 },
    { 330, 81 },
    { 331, 128 },
    { 139, 332 },
    { 333, 198 },
    { 334, 57 },
    { 102, 150 },
    { 38, 335 },
    { 336, 337 },
    { 180, 21 },
    { 338, 39 },
    { 40, 50 },
    { 56, 339 },
    { 83, 90 },
    { 340, 341 },
    { 342, 343 },
    { 15, 18 },
    { 35, 344 },
    { 345, 346 },
    { 347, 16 },
    { 20, 25 },
    { 48, 52 },
    { 348, 11 },
    { 349, 350 },
    { 351, 352 },
    { 84, 353 },
    { 30, 32 },
    { 33, 354 },
    { 355, 97 },
    { 207, 356 },
    { 79, 357 },
    { 358, 359 },
    { 360, 240 },
    { 34, 361 },
    { 47, 362 },
    { 363, 364 },
    { 148, 2 },
    { 365, 366 },
    { 367, 368 },
    { 369, 181 },
    { 26, 85 },
    { 370, 371 },
    { 105, 372 },
    { 373, 374 },
    { 242, 41 },
    { 46, 375 },
    { 376, 178 },
    { 377, 378 },
    { 379, 163 },
    { 6, 380 },
    { 381, 382 },
    { 383, 384 },
    { 17, 385 },
    { 4, 14 },
    { 386, 387 },
    { 388, 389 },
    { 390, 391 },
    { 392, 156 },
    { 393, 122 },
    { 394, 395 },
    { 118, 396 },
    { 397, 398 },
    { 399, 400 },
    { 401, 63 },
    { 3, 22 },
    { 402, 403 },
    { 404, 76 },
    { 405, 5 },
    { 406, 43 },
    { 407, 408 },
    { 409, 410 },
    { 411, 412 },
    { 413, 414 },
    { 184, 415 },
    { 67, 416 },
    { 417, 418 },
    { 419, 420 },
    { 421, 183 },
    { 422, 423 },
    { 424, 425 },
    { 426, 427 },
    { 428, 429 },
    { 430, 431 },
    { 432, 433 },
    { 434, 179 },
    { 435, 436 },
    { 437, 438 },
    { 439, 440 },
    { 441, 442 },
    { 49, 443 },
    { 444, 445 },
    { 446, 1 },
    { 10, 447 },
    { 448, 449 },
    { 450, 451 },
    { 452, 453 },
    { 454, 455 },
    { 456, 457 },
    { 458, 42 },
    { 459, 460 },
    { 461, 462 },
    { 463, 464 },
    { 465, 466 },
    { 467, 468 },
    { 469, 470 },
    { 471, 472 },
    { 473, 474 },
    { 475, 476 },
    { 477, 478 },
    { 479, 480 },
    { 481, 482 },
    { 483, 484 },
    { 485, 486 },
    { 487, 488 },
    { 489, 490 },
    { 491, 492 },
    { 493, 494 },
    { 495, 496 },
    { 497, 498 },
    { 499, 500 },
    { 501, 502 },
    { 503, 504 },
    { 505, 506 },
    { 507, 0 },
    { 508, 509 },
    { 0, 0 }
};

const std::vector<int32_t> audioRepositoryOffsetsApocalypse =
{
    0,
    29,
    203,
    327,
    397,
    444,
    510,
    623,
    691,
    700,
    734,
    791,
    862,
    947,
    982,
    991,
    1000,
    1065,
    1094,
    1281,
    1310,
    1362,
    1441,
    1487,
    1534,
    1543,
    1575,
    1736,
    1842,
    1936,
    2051,
    2156,
    2245,
    2345,
    2357,
    2418,
    2499,
    2551,
    2592,
    2786,
    2922,
    3010,
    3078,
    3167,
    3293,
    3333,
    3364,
    3473,
    3594,
    3684,
    3750,
    3803,
    3824,
    3844,
    3894,
    3933,
    4139,
    4181,
    4246,
    4346,
    4447,
    4505,
    4530,
    4582,
    4602,
    4626,
    4667,
    4857,
    4994,
    5099,
    5206,
    5239,
    5374,
    5489,
    6671,
    7366
};

typedef enum {
    HITWALLSND,              // 0
    WARPUPSND,               // 1
    WARPDOWNSND,             // 2
    GETBOLTSND,              // 3
    GETNUKESND,              // 4
    GETPOTIONSND,            // 5
    GETKEYSND,               // 6
    PORTALSND,               // 7
    GETPOINTSSND,            // 8
    USEBOLTSND,              // 9
    USENUKESND,              // 10
    USEPOTIONSND,            // 11
    USEKEYSND,               // 12
    NOITEMSND,               // 13
    WALK1SND,                // 14
    WALK2SND,                // 15
    TAKEDAMAGESND,           // 16
    MONSTERMISSSND,          // 17
    GAMEOVERSND,             // 18
    SHOOTSND,                // 19
    BIGSHOOTSND,             // 20
    SHOOTWALLSND,            // 21
    SHOOTMONSTERSND,         // 22
    TAKEDMGHURTSND,          // 23
    BALLBOUNCESND,           // 24
    NOWAYSND,                // 25
    WARPSND,                 // 26
    HIT_GATESND,             // 27
    GETGEMSND,               // 28
    BOOMSND,                 // 29
    GRELM_DEADSND,           // 30
    FREEZETIMESND,           // 31
    TIMERETURNSND,           // 32
    TICKSND,                 // 33
    BODY_EXPLODESND,         // 34
    LARGEMONSTERSND,         // 35
    SMALLMONSTERSND,         // 36
    LASTSOUND
} audioApocalypse;

const audioRepositoryStaticData audioRepositoryApocalypse =
{
    "AUDIO.APC",
    audioRepositoryOffsetsApocalypse,
    audioDictionaryApocalypse,
    LASTSOUND
};

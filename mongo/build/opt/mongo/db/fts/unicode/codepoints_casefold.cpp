/**
 *    Copyright (C) 2015 MongoDB Inc.
 *
 *    This program is free software: you can redistribute it and/or  modify
 *    it under the terms of the GNU Affero General Public License, version 3,
 *    as published by the Free Software Foundation.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Affero General Public License for more details.
 *
 *    You should have received a copy of the GNU Affero General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *    As a special exception, the copyright holders give permission to link the
 *    code of portions of this program with the OpenSSL library under certain
 *    conditions as described in each individual source file and distribute
 *    linked combinations including the program with the OpenSSL library. You
 *    must comply with the GNU Affero General Public License in all respects for
 *    all of the code used other than as permitted herein. If you modify file(s)
 *    with this exception, you may extend this exception to your version of the
 *    file(s), but you are not obligated to do so. If you do not wish to do so,
 *    delete this exception statement from your version. If you delete this
 *    exception statement from all source files in the program, then also delete
 *    it in the license file.
 *
 *    THIS IS A GENERATED FILE, DO NOT MODIFY.
 */

#include "mongo/db/fts/unicode/codepoints.h"

namespace mongo {
namespace unicode {

char32_t codepointToLower(char32_t codepoint, CaseFoldMode mode) {
               if (codepoint <= 0x7f) {
                    if (codepoint >= 'A' && codepoint <= 'Z') {
                       return (mode == CaseFoldMode::kTurkish && codepoint == 'I')
                              ? 0x131
                              : (codepoint | 0x20); // Set the ascii lowercase bit on the character.
                   }
                   return codepoint;
               }

               switch (codepoint) {
case 0xb5: return 0x3bc;
case 0xc0: return 0xe0;
case 0xc1: return 0xe1;
case 0xc2: return 0xe2;
case 0xc3: return 0xe3;
case 0xc4: return 0xe4;
case 0xc5: return 0xe5;
case 0xc6: return 0xe6;
case 0xc7: return 0xe7;
case 0xc8: return 0xe8;
case 0xc9: return 0xe9;
case 0xca: return 0xea;
case 0xcb: return 0xeb;
case 0xcc: return 0xec;
case 0xcd: return 0xed;
case 0xce: return 0xee;
case 0xcf: return 0xef;
case 0xd0: return 0xf0;
case 0xd1: return 0xf1;
case 0xd2: return 0xf2;
case 0xd3: return 0xf3;
case 0xd4: return 0xf4;
case 0xd5: return 0xf5;
case 0xd6: return 0xf6;
case 0xd8: return 0xf8;
case 0xd9: return 0xf9;
case 0xda: return 0xfa;
case 0xdb: return 0xfb;
case 0xdc: return 0xfc;
case 0xdd: return 0xfd;
case 0xde: return 0xfe;
case 0x100: return 0x101;
case 0x102: return 0x103;
case 0x104: return 0x105;
case 0x106: return 0x107;
case 0x108: return 0x109;
case 0x10a: return 0x10b;
case 0x10c: return 0x10d;
case 0x10e: return 0x10f;
case 0x110: return 0x111;
case 0x112: return 0x113;
case 0x114: return 0x115;
case 0x116: return 0x117;
case 0x118: return 0x119;
case 0x11a: return 0x11b;
case 0x11c: return 0x11d;
case 0x11e: return 0x11f;
case 0x120: return 0x121;
case 0x122: return 0x123;
case 0x124: return 0x125;
case 0x126: return 0x127;
case 0x128: return 0x129;
case 0x12a: return 0x12b;
case 0x12c: return 0x12d;
case 0x12e: return 0x12f;
case 0x130: return mode == CaseFoldMode::kTurkish ? 0x69 : 0x130;
case 0x132: return 0x133;
case 0x134: return 0x135;
case 0x136: return 0x137;
case 0x139: return 0x13a;
case 0x13b: return 0x13c;
case 0x13d: return 0x13e;
case 0x13f: return 0x140;
case 0x141: return 0x142;
case 0x143: return 0x144;
case 0x145: return 0x146;
case 0x147: return 0x148;
case 0x14a: return 0x14b;
case 0x14c: return 0x14d;
case 0x14e: return 0x14f;
case 0x150: return 0x151;
case 0x152: return 0x153;
case 0x154: return 0x155;
case 0x156: return 0x157;
case 0x158: return 0x159;
case 0x15a: return 0x15b;
case 0x15c: return 0x15d;
case 0x15e: return 0x15f;
case 0x160: return 0x161;
case 0x162: return 0x163;
case 0x164: return 0x165;
case 0x166: return 0x167;
case 0x168: return 0x169;
case 0x16a: return 0x16b;
case 0x16c: return 0x16d;
case 0x16e: return 0x16f;
case 0x170: return 0x171;
case 0x172: return 0x173;
case 0x174: return 0x175;
case 0x176: return 0x177;
case 0x178: return 0xff;
case 0x179: return 0x17a;
case 0x17b: return 0x17c;
case 0x17d: return 0x17e;
case 0x17f: return 0x73;
case 0x181: return 0x253;
case 0x182: return 0x183;
case 0x184: return 0x185;
case 0x186: return 0x254;
case 0x187: return 0x188;
case 0x189: return 0x256;
case 0x18a: return 0x257;
case 0x18b: return 0x18c;
case 0x18e: return 0x1dd;
case 0x18f: return 0x259;
case 0x190: return 0x25b;
case 0x191: return 0x192;
case 0x193: return 0x260;
case 0x194: return 0x263;
case 0x196: return 0x269;
case 0x197: return 0x268;
case 0x198: return 0x199;
case 0x19c: return 0x26f;
case 0x19d: return 0x272;
case 0x19f: return 0x275;
case 0x1a0: return 0x1a1;
case 0x1a2: return 0x1a3;
case 0x1a4: return 0x1a5;
case 0x1a6: return 0x280;
case 0x1a7: return 0x1a8;
case 0x1a9: return 0x283;
case 0x1ac: return 0x1ad;
case 0x1ae: return 0x288;
case 0x1af: return 0x1b0;
case 0x1b1: return 0x28a;
case 0x1b2: return 0x28b;
case 0x1b3: return 0x1b4;
case 0x1b5: return 0x1b6;
case 0x1b7: return 0x292;
case 0x1b8: return 0x1b9;
case 0x1bc: return 0x1bd;
case 0x1c4: return 0x1c6;
case 0x1c5: return 0x1c6;
case 0x1c7: return 0x1c9;
case 0x1c8: return 0x1c9;
case 0x1ca: return 0x1cc;
case 0x1cb: return 0x1cc;
case 0x1cd: return 0x1ce;
case 0x1cf: return 0x1d0;
case 0x1d1: return 0x1d2;
case 0x1d3: return 0x1d4;
case 0x1d5: return 0x1d6;
case 0x1d7: return 0x1d8;
case 0x1d9: return 0x1da;
case 0x1db: return 0x1dc;
case 0x1de: return 0x1df;
case 0x1e0: return 0x1e1;
case 0x1e2: return 0x1e3;
case 0x1e4: return 0x1e5;
case 0x1e6: return 0x1e7;
case 0x1e8: return 0x1e9;
case 0x1ea: return 0x1eb;
case 0x1ec: return 0x1ed;
case 0x1ee: return 0x1ef;
case 0x1f1: return 0x1f3;
case 0x1f2: return 0x1f3;
case 0x1f4: return 0x1f5;
case 0x1f6: return 0x195;
case 0x1f7: return 0x1bf;
case 0x1f8: return 0x1f9;
case 0x1fa: return 0x1fb;
case 0x1fc: return 0x1fd;
case 0x1fe: return 0x1ff;
case 0x200: return 0x201;
case 0x202: return 0x203;
case 0x204: return 0x205;
case 0x206: return 0x207;
case 0x208: return 0x209;
case 0x20a: return 0x20b;
case 0x20c: return 0x20d;
case 0x20e: return 0x20f;
case 0x210: return 0x211;
case 0x212: return 0x213;
case 0x214: return 0x215;
case 0x216: return 0x217;
case 0x218: return 0x219;
case 0x21a: return 0x21b;
case 0x21c: return 0x21d;
case 0x21e: return 0x21f;
case 0x220: return 0x19e;
case 0x222: return 0x223;
case 0x224: return 0x225;
case 0x226: return 0x227;
case 0x228: return 0x229;
case 0x22a: return 0x22b;
case 0x22c: return 0x22d;
case 0x22e: return 0x22f;
case 0x230: return 0x231;
case 0x232: return 0x233;
case 0x23a: return 0x2c65;
case 0x23b: return 0x23c;
case 0x23d: return 0x19a;
case 0x23e: return 0x2c66;
case 0x241: return 0x242;
case 0x243: return 0x180;
case 0x244: return 0x289;
case 0x245: return 0x28c;
case 0x246: return 0x247;
case 0x248: return 0x249;
case 0x24a: return 0x24b;
case 0x24c: return 0x24d;
case 0x24e: return 0x24f;
case 0x345: return 0x3b9;
case 0x370: return 0x371;
case 0x372: return 0x373;
case 0x376: return 0x377;
case 0x37f: return 0x3f3;
case 0x386: return 0x3ac;
case 0x388: return 0x3ad;
case 0x389: return 0x3ae;
case 0x38a: return 0x3af;
case 0x38c: return 0x3cc;
case 0x38e: return 0x3cd;
case 0x38f: return 0x3ce;
case 0x391: return 0x3b1;
case 0x392: return 0x3b2;
case 0x393: return 0x3b3;
case 0x394: return 0x3b4;
case 0x395: return 0x3b5;
case 0x396: return 0x3b6;
case 0x397: return 0x3b7;
case 0x398: return 0x3b8;
case 0x399: return 0x3b9;
case 0x39a: return 0x3ba;
case 0x39b: return 0x3bb;
case 0x39c: return 0x3bc;
case 0x39d: return 0x3bd;
case 0x39e: return 0x3be;
case 0x39f: return 0x3bf;
case 0x3a0: return 0x3c0;
case 0x3a1: return 0x3c1;
case 0x3a3: return 0x3c3;
case 0x3a4: return 0x3c4;
case 0x3a5: return 0x3c5;
case 0x3a6: return 0x3c6;
case 0x3a7: return 0x3c7;
case 0x3a8: return 0x3c8;
case 0x3a9: return 0x3c9;
case 0x3aa: return 0x3ca;
case 0x3ab: return 0x3cb;
case 0x3c2: return 0x3c3;
case 0x3cf: return 0x3d7;
case 0x3d0: return 0x3b2;
case 0x3d1: return 0x3b8;
case 0x3d5: return 0x3c6;
case 0x3d6: return 0x3c0;
case 0x3d8: return 0x3d9;
case 0x3da: return 0x3db;
case 0x3dc: return 0x3dd;
case 0x3de: return 0x3df;
case 0x3e0: return 0x3e1;
case 0x3e2: return 0x3e3;
case 0x3e4: return 0x3e5;
case 0x3e6: return 0x3e7;
case 0x3e8: return 0x3e9;
case 0x3ea: return 0x3eb;
case 0x3ec: return 0x3ed;
case 0x3ee: return 0x3ef;
case 0x3f0: return 0x3ba;
case 0x3f1: return 0x3c1;
case 0x3f4: return 0x3b8;
case 0x3f5: return 0x3b5;
case 0x3f7: return 0x3f8;
case 0x3f9: return 0x3f2;
case 0x3fa: return 0x3fb;
case 0x3fd: return 0x37b;
case 0x3fe: return 0x37c;
case 0x3ff: return 0x37d;
case 0x400: return 0x450;
case 0x401: return 0x451;
case 0x402: return 0x452;
case 0x403: return 0x453;
case 0x404: return 0x454;
case 0x405: return 0x455;
case 0x406: return 0x456;
case 0x407: return 0x457;
case 0x408: return 0x458;
case 0x409: return 0x459;
case 0x40a: return 0x45a;
case 0x40b: return 0x45b;
case 0x40c: return 0x45c;
case 0x40d: return 0x45d;
case 0x40e: return 0x45e;
case 0x40f: return 0x45f;
case 0x410: return 0x430;
case 0x411: return 0x431;
case 0x412: return 0x432;
case 0x413: return 0x433;
case 0x414: return 0x434;
case 0x415: return 0x435;
case 0x416: return 0x436;
case 0x417: return 0x437;
case 0x418: return 0x438;
case 0x419: return 0x439;
case 0x41a: return 0x43a;
case 0x41b: return 0x43b;
case 0x41c: return 0x43c;
case 0x41d: return 0x43d;
case 0x41e: return 0x43e;
case 0x41f: return 0x43f;
case 0x420: return 0x440;
case 0x421: return 0x441;
case 0x422: return 0x442;
case 0x423: return 0x443;
case 0x424: return 0x444;
case 0x425: return 0x445;
case 0x426: return 0x446;
case 0x427: return 0x447;
case 0x428: return 0x448;
case 0x429: return 0x449;
case 0x42a: return 0x44a;
case 0x42b: return 0x44b;
case 0x42c: return 0x44c;
case 0x42d: return 0x44d;
case 0x42e: return 0x44e;
case 0x42f: return 0x44f;
case 0x460: return 0x461;
case 0x462: return 0x463;
case 0x464: return 0x465;
case 0x466: return 0x467;
case 0x468: return 0x469;
case 0x46a: return 0x46b;
case 0x46c: return 0x46d;
case 0x46e: return 0x46f;
case 0x470: return 0x471;
case 0x472: return 0x473;
case 0x474: return 0x475;
case 0x476: return 0x477;
case 0x478: return 0x479;
case 0x47a: return 0x47b;
case 0x47c: return 0x47d;
case 0x47e: return 0x47f;
case 0x480: return 0x481;
case 0x48a: return 0x48b;
case 0x48c: return 0x48d;
case 0x48e: return 0x48f;
case 0x490: return 0x491;
case 0x492: return 0x493;
case 0x494: return 0x495;
case 0x496: return 0x497;
case 0x498: return 0x499;
case 0x49a: return 0x49b;
case 0x49c: return 0x49d;
case 0x49e: return 0x49f;
case 0x4a0: return 0x4a1;
case 0x4a2: return 0x4a3;
case 0x4a4: return 0x4a5;
case 0x4a6: return 0x4a7;
case 0x4a8: return 0x4a9;
case 0x4aa: return 0x4ab;
case 0x4ac: return 0x4ad;
case 0x4ae: return 0x4af;
case 0x4b0: return 0x4b1;
case 0x4b2: return 0x4b3;
case 0x4b4: return 0x4b5;
case 0x4b6: return 0x4b7;
case 0x4b8: return 0x4b9;
case 0x4ba: return 0x4bb;
case 0x4bc: return 0x4bd;
case 0x4be: return 0x4bf;
case 0x4c0: return 0x4cf;
case 0x4c1: return 0x4c2;
case 0x4c3: return 0x4c4;
case 0x4c5: return 0x4c6;
case 0x4c7: return 0x4c8;
case 0x4c9: return 0x4ca;
case 0x4cb: return 0x4cc;
case 0x4cd: return 0x4ce;
case 0x4d0: return 0x4d1;
case 0x4d2: return 0x4d3;
case 0x4d4: return 0x4d5;
case 0x4d6: return 0x4d7;
case 0x4d8: return 0x4d9;
case 0x4da: return 0x4db;
case 0x4dc: return 0x4dd;
case 0x4de: return 0x4df;
case 0x4e0: return 0x4e1;
case 0x4e2: return 0x4e3;
case 0x4e4: return 0x4e5;
case 0x4e6: return 0x4e7;
case 0x4e8: return 0x4e9;
case 0x4ea: return 0x4eb;
case 0x4ec: return 0x4ed;
case 0x4ee: return 0x4ef;
case 0x4f0: return 0x4f1;
case 0x4f2: return 0x4f3;
case 0x4f4: return 0x4f5;
case 0x4f6: return 0x4f7;
case 0x4f8: return 0x4f9;
case 0x4fa: return 0x4fb;
case 0x4fc: return 0x4fd;
case 0x4fe: return 0x4ff;
case 0x500: return 0x501;
case 0x502: return 0x503;
case 0x504: return 0x505;
case 0x506: return 0x507;
case 0x508: return 0x509;
case 0x50a: return 0x50b;
case 0x50c: return 0x50d;
case 0x50e: return 0x50f;
case 0x510: return 0x511;
case 0x512: return 0x513;
case 0x514: return 0x515;
case 0x516: return 0x517;
case 0x518: return 0x519;
case 0x51a: return 0x51b;
case 0x51c: return 0x51d;
case 0x51e: return 0x51f;
case 0x520: return 0x521;
case 0x522: return 0x523;
case 0x524: return 0x525;
case 0x526: return 0x527;
case 0x528: return 0x529;
case 0x52a: return 0x52b;
case 0x52c: return 0x52d;
case 0x52e: return 0x52f;
case 0x531: return 0x561;
case 0x532: return 0x562;
case 0x533: return 0x563;
case 0x534: return 0x564;
case 0x535: return 0x565;
case 0x536: return 0x566;
case 0x537: return 0x567;
case 0x538: return 0x568;
case 0x539: return 0x569;
case 0x53a: return 0x56a;
case 0x53b: return 0x56b;
case 0x53c: return 0x56c;
case 0x53d: return 0x56d;
case 0x53e: return 0x56e;
case 0x53f: return 0x56f;
case 0x540: return 0x570;
case 0x541: return 0x571;
case 0x542: return 0x572;
case 0x543: return 0x573;
case 0x544: return 0x574;
case 0x545: return 0x575;
case 0x546: return 0x576;
case 0x547: return 0x577;
case 0x548: return 0x578;
case 0x549: return 0x579;
case 0x54a: return 0x57a;
case 0x54b: return 0x57b;
case 0x54c: return 0x57c;
case 0x54d: return 0x57d;
case 0x54e: return 0x57e;
case 0x54f: return 0x57f;
case 0x550: return 0x580;
case 0x551: return 0x581;
case 0x552: return 0x582;
case 0x553: return 0x583;
case 0x554: return 0x584;
case 0x555: return 0x585;
case 0x556: return 0x586;
case 0x10a0: return 0x2d00;
case 0x10a1: return 0x2d01;
case 0x10a2: return 0x2d02;
case 0x10a3: return 0x2d03;
case 0x10a4: return 0x2d04;
case 0x10a5: return 0x2d05;
case 0x10a6: return 0x2d06;
case 0x10a7: return 0x2d07;
case 0x10a8: return 0x2d08;
case 0x10a9: return 0x2d09;
case 0x10aa: return 0x2d0a;
case 0x10ab: return 0x2d0b;
case 0x10ac: return 0x2d0c;
case 0x10ad: return 0x2d0d;
case 0x10ae: return 0x2d0e;
case 0x10af: return 0x2d0f;
case 0x10b0: return 0x2d10;
case 0x10b1: return 0x2d11;
case 0x10b2: return 0x2d12;
case 0x10b3: return 0x2d13;
case 0x10b4: return 0x2d14;
case 0x10b5: return 0x2d15;
case 0x10b6: return 0x2d16;
case 0x10b7: return 0x2d17;
case 0x10b8: return 0x2d18;
case 0x10b9: return 0x2d19;
case 0x10ba: return 0x2d1a;
case 0x10bb: return 0x2d1b;
case 0x10bc: return 0x2d1c;
case 0x10bd: return 0x2d1d;
case 0x10be: return 0x2d1e;
case 0x10bf: return 0x2d1f;
case 0x10c0: return 0x2d20;
case 0x10c1: return 0x2d21;
case 0x10c2: return 0x2d22;
case 0x10c3: return 0x2d23;
case 0x10c4: return 0x2d24;
case 0x10c5: return 0x2d25;
case 0x10c7: return 0x2d27;
case 0x10cd: return 0x2d2d;
case 0x13f8: return 0x13f0;
case 0x13f9: return 0x13f1;
case 0x13fa: return 0x13f2;
case 0x13fb: return 0x13f3;
case 0x13fc: return 0x13f4;
case 0x13fd: return 0x13f5;
case 0x1e00: return 0x1e01;
case 0x1e02: return 0x1e03;
case 0x1e04: return 0x1e05;
case 0x1e06: return 0x1e07;
case 0x1e08: return 0x1e09;
case 0x1e0a: return 0x1e0b;
case 0x1e0c: return 0x1e0d;
case 0x1e0e: return 0x1e0f;
case 0x1e10: return 0x1e11;
case 0x1e12: return 0x1e13;
case 0x1e14: return 0x1e15;
case 0x1e16: return 0x1e17;
case 0x1e18: return 0x1e19;
case 0x1e1a: return 0x1e1b;
case 0x1e1c: return 0x1e1d;
case 0x1e1e: return 0x1e1f;
case 0x1e20: return 0x1e21;
case 0x1e22: return 0x1e23;
case 0x1e24: return 0x1e25;
case 0x1e26: return 0x1e27;
case 0x1e28: return 0x1e29;
case 0x1e2a: return 0x1e2b;
case 0x1e2c: return 0x1e2d;
case 0x1e2e: return 0x1e2f;
case 0x1e30: return 0x1e31;
case 0x1e32: return 0x1e33;
case 0x1e34: return 0x1e35;
case 0x1e36: return 0x1e37;
case 0x1e38: return 0x1e39;
case 0x1e3a: return 0x1e3b;
case 0x1e3c: return 0x1e3d;
case 0x1e3e: return 0x1e3f;
case 0x1e40: return 0x1e41;
case 0x1e42: return 0x1e43;
case 0x1e44: return 0x1e45;
case 0x1e46: return 0x1e47;
case 0x1e48: return 0x1e49;
case 0x1e4a: return 0x1e4b;
case 0x1e4c: return 0x1e4d;
case 0x1e4e: return 0x1e4f;
case 0x1e50: return 0x1e51;
case 0x1e52: return 0x1e53;
case 0x1e54: return 0x1e55;
case 0x1e56: return 0x1e57;
case 0x1e58: return 0x1e59;
case 0x1e5a: return 0x1e5b;
case 0x1e5c: return 0x1e5d;
case 0x1e5e: return 0x1e5f;
case 0x1e60: return 0x1e61;
case 0x1e62: return 0x1e63;
case 0x1e64: return 0x1e65;
case 0x1e66: return 0x1e67;
case 0x1e68: return 0x1e69;
case 0x1e6a: return 0x1e6b;
case 0x1e6c: return 0x1e6d;
case 0x1e6e: return 0x1e6f;
case 0x1e70: return 0x1e71;
case 0x1e72: return 0x1e73;
case 0x1e74: return 0x1e75;
case 0x1e76: return 0x1e77;
case 0x1e78: return 0x1e79;
case 0x1e7a: return 0x1e7b;
case 0x1e7c: return 0x1e7d;
case 0x1e7e: return 0x1e7f;
case 0x1e80: return 0x1e81;
case 0x1e82: return 0x1e83;
case 0x1e84: return 0x1e85;
case 0x1e86: return 0x1e87;
case 0x1e88: return 0x1e89;
case 0x1e8a: return 0x1e8b;
case 0x1e8c: return 0x1e8d;
case 0x1e8e: return 0x1e8f;
case 0x1e90: return 0x1e91;
case 0x1e92: return 0x1e93;
case 0x1e94: return 0x1e95;
case 0x1e9b: return 0x1e61;
case 0x1e9e: return 0xdf;
case 0x1ea0: return 0x1ea1;
case 0x1ea2: return 0x1ea3;
case 0x1ea4: return 0x1ea5;
case 0x1ea6: return 0x1ea7;
case 0x1ea8: return 0x1ea9;
case 0x1eaa: return 0x1eab;
case 0x1eac: return 0x1ead;
case 0x1eae: return 0x1eaf;
case 0x1eb0: return 0x1eb1;
case 0x1eb2: return 0x1eb3;
case 0x1eb4: return 0x1eb5;
case 0x1eb6: return 0x1eb7;
case 0x1eb8: return 0x1eb9;
case 0x1eba: return 0x1ebb;
case 0x1ebc: return 0x1ebd;
case 0x1ebe: return 0x1ebf;
case 0x1ec0: return 0x1ec1;
case 0x1ec2: return 0x1ec3;
case 0x1ec4: return 0x1ec5;
case 0x1ec6: return 0x1ec7;
case 0x1ec8: return 0x1ec9;
case 0x1eca: return 0x1ecb;
case 0x1ecc: return 0x1ecd;
case 0x1ece: return 0x1ecf;
case 0x1ed0: return 0x1ed1;
case 0x1ed2: return 0x1ed3;
case 0x1ed4: return 0x1ed5;
case 0x1ed6: return 0x1ed7;
case 0x1ed8: return 0x1ed9;
case 0x1eda: return 0x1edb;
case 0x1edc: return 0x1edd;
case 0x1ede: return 0x1edf;
case 0x1ee0: return 0x1ee1;
case 0x1ee2: return 0x1ee3;
case 0x1ee4: return 0x1ee5;
case 0x1ee6: return 0x1ee7;
case 0x1ee8: return 0x1ee9;
case 0x1eea: return 0x1eeb;
case 0x1eec: return 0x1eed;
case 0x1eee: return 0x1eef;
case 0x1ef0: return 0x1ef1;
case 0x1ef2: return 0x1ef3;
case 0x1ef4: return 0x1ef5;
case 0x1ef6: return 0x1ef7;
case 0x1ef8: return 0x1ef9;
case 0x1efa: return 0x1efb;
case 0x1efc: return 0x1efd;
case 0x1efe: return 0x1eff;
case 0x1f08: return 0x1f00;
case 0x1f09: return 0x1f01;
case 0x1f0a: return 0x1f02;
case 0x1f0b: return 0x1f03;
case 0x1f0c: return 0x1f04;
case 0x1f0d: return 0x1f05;
case 0x1f0e: return 0x1f06;
case 0x1f0f: return 0x1f07;
case 0x1f18: return 0x1f10;
case 0x1f19: return 0x1f11;
case 0x1f1a: return 0x1f12;
case 0x1f1b: return 0x1f13;
case 0x1f1c: return 0x1f14;
case 0x1f1d: return 0x1f15;
case 0x1f28: return 0x1f20;
case 0x1f29: return 0x1f21;
case 0x1f2a: return 0x1f22;
case 0x1f2b: return 0x1f23;
case 0x1f2c: return 0x1f24;
case 0x1f2d: return 0x1f25;
case 0x1f2e: return 0x1f26;
case 0x1f2f: return 0x1f27;
case 0x1f38: return 0x1f30;
case 0x1f39: return 0x1f31;
case 0x1f3a: return 0x1f32;
case 0x1f3b: return 0x1f33;
case 0x1f3c: return 0x1f34;
case 0x1f3d: return 0x1f35;
case 0x1f3e: return 0x1f36;
case 0x1f3f: return 0x1f37;
case 0x1f48: return 0x1f40;
case 0x1f49: return 0x1f41;
case 0x1f4a: return 0x1f42;
case 0x1f4b: return 0x1f43;
case 0x1f4c: return 0x1f44;
case 0x1f4d: return 0x1f45;
case 0x1f59: return 0x1f51;
case 0x1f5b: return 0x1f53;
case 0x1f5d: return 0x1f55;
case 0x1f5f: return 0x1f57;
case 0x1f68: return 0x1f60;
case 0x1f69: return 0x1f61;
case 0x1f6a: return 0x1f62;
case 0x1f6b: return 0x1f63;
case 0x1f6c: return 0x1f64;
case 0x1f6d: return 0x1f65;
case 0x1f6e: return 0x1f66;
case 0x1f6f: return 0x1f67;
case 0x1f88: return 0x1f80;
case 0x1f89: return 0x1f81;
case 0x1f8a: return 0x1f82;
case 0x1f8b: return 0x1f83;
case 0x1f8c: return 0x1f84;
case 0x1f8d: return 0x1f85;
case 0x1f8e: return 0x1f86;
case 0x1f8f: return 0x1f87;
case 0x1f98: return 0x1f90;
case 0x1f99: return 0x1f91;
case 0x1f9a: return 0x1f92;
case 0x1f9b: return 0x1f93;
case 0x1f9c: return 0x1f94;
case 0x1f9d: return 0x1f95;
case 0x1f9e: return 0x1f96;
case 0x1f9f: return 0x1f97;
case 0x1fa8: return 0x1fa0;
case 0x1fa9: return 0x1fa1;
case 0x1faa: return 0x1fa2;
case 0x1fab: return 0x1fa3;
case 0x1fac: return 0x1fa4;
case 0x1fad: return 0x1fa5;
case 0x1fae: return 0x1fa6;
case 0x1faf: return 0x1fa7;
case 0x1fb8: return 0x1fb0;
case 0x1fb9: return 0x1fb1;
case 0x1fba: return 0x1f70;
case 0x1fbb: return 0x1f71;
case 0x1fbc: return 0x1fb3;
case 0x1fbe: return 0x3b9;
case 0x1fc8: return 0x1f72;
case 0x1fc9: return 0x1f73;
case 0x1fca: return 0x1f74;
case 0x1fcb: return 0x1f75;
case 0x1fcc: return 0x1fc3;
case 0x1fd8: return 0x1fd0;
case 0x1fd9: return 0x1fd1;
case 0x1fda: return 0x1f76;
case 0x1fdb: return 0x1f77;
case 0x1fe8: return 0x1fe0;
case 0x1fe9: return 0x1fe1;
case 0x1fea: return 0x1f7a;
case 0x1feb: return 0x1f7b;
case 0x1fec: return 0x1fe5;
case 0x1ff8: return 0x1f78;
case 0x1ff9: return 0x1f79;
case 0x1ffa: return 0x1f7c;
case 0x1ffb: return 0x1f7d;
case 0x1ffc: return 0x1ff3;
case 0x2126: return 0x3c9;
case 0x212a: return 0x6b;
case 0x212b: return 0xe5;
case 0x2132: return 0x214e;
case 0x2160: return 0x2170;
case 0x2161: return 0x2171;
case 0x2162: return 0x2172;
case 0x2163: return 0x2173;
case 0x2164: return 0x2174;
case 0x2165: return 0x2175;
case 0x2166: return 0x2176;
case 0x2167: return 0x2177;
case 0x2168: return 0x2178;
case 0x2169: return 0x2179;
case 0x216a: return 0x217a;
case 0x216b: return 0x217b;
case 0x216c: return 0x217c;
case 0x216d: return 0x217d;
case 0x216e: return 0x217e;
case 0x216f: return 0x217f;
case 0x2183: return 0x2184;
case 0x24b6: return 0x24d0;
case 0x24b7: return 0x24d1;
case 0x24b8: return 0x24d2;
case 0x24b9: return 0x24d3;
case 0x24ba: return 0x24d4;
case 0x24bb: return 0x24d5;
case 0x24bc: return 0x24d6;
case 0x24bd: return 0x24d7;
case 0x24be: return 0x24d8;
case 0x24bf: return 0x24d9;
case 0x24c0: return 0x24da;
case 0x24c1: return 0x24db;
case 0x24c2: return 0x24dc;
case 0x24c3: return 0x24dd;
case 0x24c4: return 0x24de;
case 0x24c5: return 0x24df;
case 0x24c6: return 0x24e0;
case 0x24c7: return 0x24e1;
case 0x24c8: return 0x24e2;
case 0x24c9: return 0x24e3;
case 0x24ca: return 0x24e4;
case 0x24cb: return 0x24e5;
case 0x24cc: return 0x24e6;
case 0x24cd: return 0x24e7;
case 0x24ce: return 0x24e8;
case 0x24cf: return 0x24e9;
case 0x2c00: return 0x2c30;
case 0x2c01: return 0x2c31;
case 0x2c02: return 0x2c32;
case 0x2c03: return 0x2c33;
case 0x2c04: return 0x2c34;
case 0x2c05: return 0x2c35;
case 0x2c06: return 0x2c36;
case 0x2c07: return 0x2c37;
case 0x2c08: return 0x2c38;
case 0x2c09: return 0x2c39;
case 0x2c0a: return 0x2c3a;
case 0x2c0b: return 0x2c3b;
case 0x2c0c: return 0x2c3c;
case 0x2c0d: return 0x2c3d;
case 0x2c0e: return 0x2c3e;
case 0x2c0f: return 0x2c3f;
case 0x2c10: return 0x2c40;
case 0x2c11: return 0x2c41;
case 0x2c12: return 0x2c42;
case 0x2c13: return 0x2c43;
case 0x2c14: return 0x2c44;
case 0x2c15: return 0x2c45;
case 0x2c16: return 0x2c46;
case 0x2c17: return 0x2c47;
case 0x2c18: return 0x2c48;
case 0x2c19: return 0x2c49;
case 0x2c1a: return 0x2c4a;
case 0x2c1b: return 0x2c4b;
case 0x2c1c: return 0x2c4c;
case 0x2c1d: return 0x2c4d;
case 0x2c1e: return 0x2c4e;
case 0x2c1f: return 0x2c4f;
case 0x2c20: return 0x2c50;
case 0x2c21: return 0x2c51;
case 0x2c22: return 0x2c52;
case 0x2c23: return 0x2c53;
case 0x2c24: return 0x2c54;
case 0x2c25: return 0x2c55;
case 0x2c26: return 0x2c56;
case 0x2c27: return 0x2c57;
case 0x2c28: return 0x2c58;
case 0x2c29: return 0x2c59;
case 0x2c2a: return 0x2c5a;
case 0x2c2b: return 0x2c5b;
case 0x2c2c: return 0x2c5c;
case 0x2c2d: return 0x2c5d;
case 0x2c2e: return 0x2c5e;
case 0x2c60: return 0x2c61;
case 0x2c62: return 0x26b;
case 0x2c63: return 0x1d7d;
case 0x2c64: return 0x27d;
case 0x2c67: return 0x2c68;
case 0x2c69: return 0x2c6a;
case 0x2c6b: return 0x2c6c;
case 0x2c6d: return 0x251;
case 0x2c6e: return 0x271;
case 0x2c6f: return 0x250;
case 0x2c70: return 0x252;
case 0x2c72: return 0x2c73;
case 0x2c75: return 0x2c76;
case 0x2c7e: return 0x23f;
case 0x2c7f: return 0x240;
case 0x2c80: return 0x2c81;
case 0x2c82: return 0x2c83;
case 0x2c84: return 0x2c85;
case 0x2c86: return 0x2c87;
case 0x2c88: return 0x2c89;
case 0x2c8a: return 0x2c8b;
case 0x2c8c: return 0x2c8d;
case 0x2c8e: return 0x2c8f;
case 0x2c90: return 0x2c91;
case 0x2c92: return 0x2c93;
case 0x2c94: return 0x2c95;
case 0x2c96: return 0x2c97;
case 0x2c98: return 0x2c99;
case 0x2c9a: return 0x2c9b;
case 0x2c9c: return 0x2c9d;
case 0x2c9e: return 0x2c9f;
case 0x2ca0: return 0x2ca1;
case 0x2ca2: return 0x2ca3;
case 0x2ca4: return 0x2ca5;
case 0x2ca6: return 0x2ca7;
case 0x2ca8: return 0x2ca9;
case 0x2caa: return 0x2cab;
case 0x2cac: return 0x2cad;
case 0x2cae: return 0x2caf;
case 0x2cb0: return 0x2cb1;
case 0x2cb2: return 0x2cb3;
case 0x2cb4: return 0x2cb5;
case 0x2cb6: return 0x2cb7;
case 0x2cb8: return 0x2cb9;
case 0x2cba: return 0x2cbb;
case 0x2cbc: return 0x2cbd;
case 0x2cbe: return 0x2cbf;
case 0x2cc0: return 0x2cc1;
case 0x2cc2: return 0x2cc3;
case 0x2cc4: return 0x2cc5;
case 0x2cc6: return 0x2cc7;
case 0x2cc8: return 0x2cc9;
case 0x2cca: return 0x2ccb;
case 0x2ccc: return 0x2ccd;
case 0x2cce: return 0x2ccf;
case 0x2cd0: return 0x2cd1;
case 0x2cd2: return 0x2cd3;
case 0x2cd4: return 0x2cd5;
case 0x2cd6: return 0x2cd7;
case 0x2cd8: return 0x2cd9;
case 0x2cda: return 0x2cdb;
case 0x2cdc: return 0x2cdd;
case 0x2cde: return 0x2cdf;
case 0x2ce0: return 0x2ce1;
case 0x2ce2: return 0x2ce3;
case 0x2ceb: return 0x2cec;
case 0x2ced: return 0x2cee;
case 0x2cf2: return 0x2cf3;
case 0xa640: return 0xa641;
case 0xa642: return 0xa643;
case 0xa644: return 0xa645;
case 0xa646: return 0xa647;
case 0xa648: return 0xa649;
case 0xa64a: return 0xa64b;
case 0xa64c: return 0xa64d;
case 0xa64e: return 0xa64f;
case 0xa650: return 0xa651;
case 0xa652: return 0xa653;
case 0xa654: return 0xa655;
case 0xa656: return 0xa657;
case 0xa658: return 0xa659;
case 0xa65a: return 0xa65b;
case 0xa65c: return 0xa65d;
case 0xa65e: return 0xa65f;
case 0xa660: return 0xa661;
case 0xa662: return 0xa663;
case 0xa664: return 0xa665;
case 0xa666: return 0xa667;
case 0xa668: return 0xa669;
case 0xa66a: return 0xa66b;
case 0xa66c: return 0xa66d;
case 0xa680: return 0xa681;
case 0xa682: return 0xa683;
case 0xa684: return 0xa685;
case 0xa686: return 0xa687;
case 0xa688: return 0xa689;
case 0xa68a: return 0xa68b;
case 0xa68c: return 0xa68d;
case 0xa68e: return 0xa68f;
case 0xa690: return 0xa691;
case 0xa692: return 0xa693;
case 0xa694: return 0xa695;
case 0xa696: return 0xa697;
case 0xa698: return 0xa699;
case 0xa69a: return 0xa69b;
case 0xa722: return 0xa723;
case 0xa724: return 0xa725;
case 0xa726: return 0xa727;
case 0xa728: return 0xa729;
case 0xa72a: return 0xa72b;
case 0xa72c: return 0xa72d;
case 0xa72e: return 0xa72f;
case 0xa732: return 0xa733;
case 0xa734: return 0xa735;
case 0xa736: return 0xa737;
case 0xa738: return 0xa739;
case 0xa73a: return 0xa73b;
case 0xa73c: return 0xa73d;
case 0xa73e: return 0xa73f;
case 0xa740: return 0xa741;
case 0xa742: return 0xa743;
case 0xa744: return 0xa745;
case 0xa746: return 0xa747;
case 0xa748: return 0xa749;
case 0xa74a: return 0xa74b;
case 0xa74c: return 0xa74d;
case 0xa74e: return 0xa74f;
case 0xa750: return 0xa751;
case 0xa752: return 0xa753;
case 0xa754: return 0xa755;
case 0xa756: return 0xa757;
case 0xa758: return 0xa759;
case 0xa75a: return 0xa75b;
case 0xa75c: return 0xa75d;
case 0xa75e: return 0xa75f;
case 0xa760: return 0xa761;
case 0xa762: return 0xa763;
case 0xa764: return 0xa765;
case 0xa766: return 0xa767;
case 0xa768: return 0xa769;
case 0xa76a: return 0xa76b;
case 0xa76c: return 0xa76d;
case 0xa76e: return 0xa76f;
case 0xa779: return 0xa77a;
case 0xa77b: return 0xa77c;
case 0xa77d: return 0x1d79;
case 0xa77e: return 0xa77f;
case 0xa780: return 0xa781;
case 0xa782: return 0xa783;
case 0xa784: return 0xa785;
case 0xa786: return 0xa787;
case 0xa78b: return 0xa78c;
case 0xa78d: return 0x265;
case 0xa790: return 0xa791;
case 0xa792: return 0xa793;
case 0xa796: return 0xa797;
case 0xa798: return 0xa799;
case 0xa79a: return 0xa79b;
case 0xa79c: return 0xa79d;
case 0xa79e: return 0xa79f;
case 0xa7a0: return 0xa7a1;
case 0xa7a2: return 0xa7a3;
case 0xa7a4: return 0xa7a5;
case 0xa7a6: return 0xa7a7;
case 0xa7a8: return 0xa7a9;
case 0xa7aa: return 0x266;
case 0xa7ab: return 0x25c;
case 0xa7ac: return 0x261;
case 0xa7ad: return 0x26c;
case 0xa7b0: return 0x29e;
case 0xa7b1: return 0x287;
case 0xa7b2: return 0x29d;
case 0xa7b3: return 0xab53;
case 0xa7b4: return 0xa7b5;
case 0xa7b6: return 0xa7b7;
case 0xab70: return 0x13a0;
case 0xab71: return 0x13a1;
case 0xab72: return 0x13a2;
case 0xab73: return 0x13a3;
case 0xab74: return 0x13a4;
case 0xab75: return 0x13a5;
case 0xab76: return 0x13a6;
case 0xab77: return 0x13a7;
case 0xab78: return 0x13a8;
case 0xab79: return 0x13a9;
case 0xab7a: return 0x13aa;
case 0xab7b: return 0x13ab;
case 0xab7c: return 0x13ac;
case 0xab7d: return 0x13ad;
case 0xab7e: return 0x13ae;
case 0xab7f: return 0x13af;
case 0xab80: return 0x13b0;
case 0xab81: return 0x13b1;
case 0xab82: return 0x13b2;
case 0xab83: return 0x13b3;
case 0xab84: return 0x13b4;
case 0xab85: return 0x13b5;
case 0xab86: return 0x13b6;
case 0xab87: return 0x13b7;
case 0xab88: return 0x13b8;
case 0xab89: return 0x13b9;
case 0xab8a: return 0x13ba;
case 0xab8b: return 0x13bb;
case 0xab8c: return 0x13bc;
case 0xab8d: return 0x13bd;
case 0xab8e: return 0x13be;
case 0xab8f: return 0x13bf;
case 0xab90: return 0x13c0;
case 0xab91: return 0x13c1;
case 0xab92: return 0x13c2;
case 0xab93: return 0x13c3;
case 0xab94: return 0x13c4;
case 0xab95: return 0x13c5;
case 0xab96: return 0x13c6;
case 0xab97: return 0x13c7;
case 0xab98: return 0x13c8;
case 0xab99: return 0x13c9;
case 0xab9a: return 0x13ca;
case 0xab9b: return 0x13cb;
case 0xab9c: return 0x13cc;
case 0xab9d: return 0x13cd;
case 0xab9e: return 0x13ce;
case 0xab9f: return 0x13cf;
case 0xaba0: return 0x13d0;
case 0xaba1: return 0x13d1;
case 0xaba2: return 0x13d2;
case 0xaba3: return 0x13d3;
case 0xaba4: return 0x13d4;
case 0xaba5: return 0x13d5;
case 0xaba6: return 0x13d6;
case 0xaba7: return 0x13d7;
case 0xaba8: return 0x13d8;
case 0xaba9: return 0x13d9;
case 0xabaa: return 0x13da;
case 0xabab: return 0x13db;
case 0xabac: return 0x13dc;
case 0xabad: return 0x13dd;
case 0xabae: return 0x13de;
case 0xabaf: return 0x13df;
case 0xabb0: return 0x13e0;
case 0xabb1: return 0x13e1;
case 0xabb2: return 0x13e2;
case 0xabb3: return 0x13e3;
case 0xabb4: return 0x13e4;
case 0xabb5: return 0x13e5;
case 0xabb6: return 0x13e6;
case 0xabb7: return 0x13e7;
case 0xabb8: return 0x13e8;
case 0xabb9: return 0x13e9;
case 0xabba: return 0x13ea;
case 0xabbb: return 0x13eb;
case 0xabbc: return 0x13ec;
case 0xabbd: return 0x13ed;
case 0xabbe: return 0x13ee;
case 0xabbf: return 0x13ef;
case 0xff21: return 0xff41;
case 0xff22: return 0xff42;
case 0xff23: return 0xff43;
case 0xff24: return 0xff44;
case 0xff25: return 0xff45;
case 0xff26: return 0xff46;
case 0xff27: return 0xff47;
case 0xff28: return 0xff48;
case 0xff29: return 0xff49;
case 0xff2a: return 0xff4a;
case 0xff2b: return 0xff4b;
case 0xff2c: return 0xff4c;
case 0xff2d: return 0xff4d;
case 0xff2e: return 0xff4e;
case 0xff2f: return 0xff4f;
case 0xff30: return 0xff50;
case 0xff31: return 0xff51;
case 0xff32: return 0xff52;
case 0xff33: return 0xff53;
case 0xff34: return 0xff54;
case 0xff35: return 0xff55;
case 0xff36: return 0xff56;
case 0xff37: return 0xff57;
case 0xff38: return 0xff58;
case 0xff39: return 0xff59;
case 0xff3a: return 0xff5a;
case 0x10400: return 0x10428;
case 0x10401: return 0x10429;
case 0x10402: return 0x1042a;
case 0x10403: return 0x1042b;
case 0x10404: return 0x1042c;
case 0x10405: return 0x1042d;
case 0x10406: return 0x1042e;
case 0x10407: return 0x1042f;
case 0x10408: return 0x10430;
case 0x10409: return 0x10431;
case 0x1040a: return 0x10432;
case 0x1040b: return 0x10433;
case 0x1040c: return 0x10434;
case 0x1040d: return 0x10435;
case 0x1040e: return 0x10436;
case 0x1040f: return 0x10437;
case 0x10410: return 0x10438;
case 0x10411: return 0x10439;
case 0x10412: return 0x1043a;
case 0x10413: return 0x1043b;
case 0x10414: return 0x1043c;
case 0x10415: return 0x1043d;
case 0x10416: return 0x1043e;
case 0x10417: return 0x1043f;
case 0x10418: return 0x10440;
case 0x10419: return 0x10441;
case 0x1041a: return 0x10442;
case 0x1041b: return 0x10443;
case 0x1041c: return 0x10444;
case 0x1041d: return 0x10445;
case 0x1041e: return 0x10446;
case 0x1041f: return 0x10447;
case 0x10420: return 0x10448;
case 0x10421: return 0x10449;
case 0x10422: return 0x1044a;
case 0x10423: return 0x1044b;
case 0x10424: return 0x1044c;
case 0x10425: return 0x1044d;
case 0x10426: return 0x1044e;
case 0x10427: return 0x1044f;
case 0x10c80: return 0x10cc0;
case 0x10c81: return 0x10cc1;
case 0x10c82: return 0x10cc2;
case 0x10c83: return 0x10cc3;
case 0x10c84: return 0x10cc4;
case 0x10c85: return 0x10cc5;
case 0x10c86: return 0x10cc6;
case 0x10c87: return 0x10cc7;
case 0x10c88: return 0x10cc8;
case 0x10c89: return 0x10cc9;
case 0x10c8a: return 0x10cca;
case 0x10c8b: return 0x10ccb;
case 0x10c8c: return 0x10ccc;
case 0x10c8d: return 0x10ccd;
case 0x10c8e: return 0x10cce;
case 0x10c8f: return 0x10ccf;
case 0x10c90: return 0x10cd0;
case 0x10c91: return 0x10cd1;
case 0x10c92: return 0x10cd2;
case 0x10c93: return 0x10cd3;
case 0x10c94: return 0x10cd4;
case 0x10c95: return 0x10cd5;
case 0x10c96: return 0x10cd6;
case 0x10c97: return 0x10cd7;
case 0x10c98: return 0x10cd8;
case 0x10c99: return 0x10cd9;
case 0x10c9a: return 0x10cda;
case 0x10c9b: return 0x10cdb;
case 0x10c9c: return 0x10cdc;
case 0x10c9d: return 0x10cdd;
case 0x10c9e: return 0x10cde;
case 0x10c9f: return 0x10cdf;
case 0x10ca0: return 0x10ce0;
case 0x10ca1: return 0x10ce1;
case 0x10ca2: return 0x10ce2;
case 0x10ca3: return 0x10ce3;
case 0x10ca4: return 0x10ce4;
case 0x10ca5: return 0x10ce5;
case 0x10ca6: return 0x10ce6;
case 0x10ca7: return 0x10ce7;
case 0x10ca8: return 0x10ce8;
case 0x10ca9: return 0x10ce9;
case 0x10caa: return 0x10cea;
case 0x10cab: return 0x10ceb;
case 0x10cac: return 0x10cec;
case 0x10cad: return 0x10ced;
case 0x10cae: return 0x10cee;
case 0x10caf: return 0x10cef;
case 0x10cb0: return 0x10cf0;
case 0x10cb1: return 0x10cf1;
case 0x10cb2: return 0x10cf2;
case 0x118a0: return 0x118c0;
case 0x118a1: return 0x118c1;
case 0x118a2: return 0x118c2;
case 0x118a3: return 0x118c3;
case 0x118a4: return 0x118c4;
case 0x118a5: return 0x118c5;
case 0x118a6: return 0x118c6;
case 0x118a7: return 0x118c7;
case 0x118a8: return 0x118c8;
case 0x118a9: return 0x118c9;
case 0x118aa: return 0x118ca;
case 0x118ab: return 0x118cb;
case 0x118ac: return 0x118cc;
case 0x118ad: return 0x118cd;
case 0x118ae: return 0x118ce;
case 0x118af: return 0x118cf;
case 0x118b0: return 0x118d0;
case 0x118b1: return 0x118d1;
case 0x118b2: return 0x118d2;
case 0x118b3: return 0x118d3;
case 0x118b4: return 0x118d4;
case 0x118b5: return 0x118d5;
case 0x118b6: return 0x118d6;
case 0x118b7: return 0x118d7;
case 0x118b8: return 0x118d8;
case 0x118b9: return 0x118d9;
case 0x118ba: return 0x118da;
case 0x118bb: return 0x118db;
case 0x118bc: return 0x118dc;
case 0x118bd: return 0x118dd;
case 0x118be: return 0x118de;
case 0x118bf: return 0x118df;
    default: return codepoint;
    }
}
} //  namespace unicode
} //  namespace mongo
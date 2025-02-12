// Copyright 2025 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s4.hpp"

namespace xsk::gsc::s4
{

extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x001, "abs" },
    { 0x005, "addbot" },
    { 0x00D, "anglestoaxis" },
    { 0x00E, "anglestoforward" },
    { 0x00F, "anglestoright" },
    { 0x010, "anglestoup" },
    { 0x01B, "bbPrint" },
    { 0x040, "clamp" },
    { 0x04B, "cos" },
    { 0x057, "distance" },
    { 0x058, "distance2d" },
    { 0x059, "distance2dsquared" },
    { 0x05A, "distancesquared" },
    { 0x05C, "earthquake" },
    { 0x067, "float" },
    { 0x068, "floor" },
    { 0x07A, "getarraykeys" },
    { 0x08F, "getdvar" },
    { 0x090, "getdvarfloat" },
    { 0x091, "getdvarint" },
    { 0x096, "getent" },
    { 0x097, "getentarray" },
    { 0x09B, "getfirstarraykey" },
    { 0x0A2, "getgroundposition" },
    { 0x0AD, "getmatchrulesdata" },
    { 0x0B1, "getnextarraykey" },
    { 0x0C9, "getscriptablearray" },
    { 0x0D3, "getstartorigin" },
    { 0x0DD, "gettime" },
    { 0x0EA, "getweaponattachments" },
    { 0x0EB, "getweaponattachmentworldmodels" },
    { 0x0EC, "getweaponbasename" },
    { 0x0F2, "getweaponmodel" },
    { 0x0FE, "int" },
    { 0x100, "iprintln" },
    { 0x101, "iprintlnbold" },
    { 0x103, "isagent" },
    { 0x105, "isai" },
    { 0x106, "isalive" },
    { 0x108, "isbot" },
    { 0x114, "isint" },
    { 0x118, "isplayer" },
    { 0x122, "issubstr" },
    { 0x126, "isusingmatchrulesdata" },
    { 0x12E, "kick" },
    { 0x132, "length" },
    { 0x13B, "loadfx" },
    { 0x145, "magicgrenademanual" },
    { 0x146, "map_restart" },
    { 0x149, "max" },
    { 0x14A, "min" },
    { 0x154, "newclienthudelem" },
    { 0x155, "newhudelem" },
    { 0x156, "newteamhudelem" },
    { 0x15A, "obituary" },
    { 0x1C7, "rotatevector" },
    { 0x191, "objective_setpingsforteam" },
    { 0x195, "physicsexplosionsphere" },
    { 0x19B, "playfx" },
    { 0x19C, "playfxontag" },
    { 0x1A1, "playrumbleonposition" },
    { 0x1A2, "playsoundatpos" },
    { 0x1AD, "precachemodel" },
    { 0x1BB, "randomfloat" },
    { 0x1BC, "randomfloatrange" },
    { 0x1BD, "randomint" },
    { 0x1BE, "randomintrange" },
    { 0x1D3, "setclientnamemode" },
    { 0x1D5, "setdvar" },
    { 0x1D6, "setdvarifuninitialized" },
    { 0x1D7, "setdynamicdvar" },
    { 0x1D8, "setgameendtime" },
    { 0x1DD, "setmapcenter" },
    { 0x1E9, "setomnvar" },
    { 0x1EF, "setsaveddvar" },
    { 0x203, "sin" },
    { 0x20A, "spawn" },
    { 0x20C, "spawnfx" },
    { 0x20E, "spawnhelicopter" },
    { 0x214, "spawnstruct" },
    { 0x215, "spawnturret" },
    { 0x21D, "stopfxontag" },
    { 0x21F, "strtok" },
    { 0x223, "tablelookupbyrow" },
    { 0x224, "tablelookupgetnumrows" },
    { 0x248, "tolower" },
    { 0x250, "triggerfx" },
    { 0x25C, "vectordot" },
    { 0x25F, "vectornormalize" },
    { 0x260, "vectortoangles" },
    { 0x267, "visionsetmissilecam" },
    { 0x268, "visionsetnaked" },
    { 0x269, "visionsetnight" },
    { 0x26A, "visionsetpain" },
    { 0x26B, "visionsetthermal" },
    { 0x26D, "weaponburstcount" },
    { 0x26E, "weaponclass" },
    { 0x270, "weaponclipsize" },
    { 0x272, "weaponfiretime" },
    { 0x277, "weaponisauto" },
    { 0x27A, "weaponissemiauto" },
    { 0x27B, "weaponmaxammo" },
    { 0x2BA, "isbotmatchmakingenabled" },
    { 0x2BB, "addmpbottoteam" },
    { 0x2C9, "physics_createcontents" },
    { 0x2DF, "isvector" },
    { 0x2E0, "isent" },
    { 0x2F1, "weaponisbeam" },
    { 0x306, "anglestoleft" },
    { 0x351, "makeweapon" },
    { 0x352, "getcompleteweaponname" },
    { 0x372, "isweapon" },
    { 0x373, "issameweapon" },
    { 0x374, "isnullweapon" },
    { 0x37D, "makeweaponfromstring" },
    { 0x424, "brmatchstarted" },
}};

} // namespace xsk::gsc::s4

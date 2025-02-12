// Copyright 2025 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s1_pc.hpp"

namespace xsk::gsc::s1_pc
{

extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x001, "precacheturret" },
    { 0x002, "getweaponarray" },
    { 0x003, "createprintchannel" },
    { 0x004, "updategamerprofileall" },
    { 0x005, "clearlocalizedstrings" },
    { 0x006, "setphysicsgravitydir" },
    { 0x007, "gettimescale" },
    { 0x008, "settimescale" },
    { 0x009, "setslowmotionview" },
    { 0x00A, "teleportscene" },
    { 0x00B, "forcesharedammo" },
    { 0x00C, "refreshhudcompass" },
    { 0x00D, "refreshhudammocounter" },
    { 0x00E, "notifyoncommand" },
    { 0x00F, "setprintchannel" },
    { 0x010, "print" },
    { 0x011, "println" },
    { 0x012, "print3d" },
    { 0x013, "line" },
    { 0x014, "box" },
    { 0x015, "orientedbox" },
    { 0x016, "sphere" },
    { 0x017, "cylinder" },
    { 0x018, "spawnturret" },
    { 0x019, "canspawnturret" },
    { 0x01A, "assert" },
    { 0x01B, "pausecinematicingame" },
    { 0x01C, "drawcompassfriendlies" },
    { 0x01D, "bulletspread" },
    { 0x01E, "bullettracer" },
    { 0x01F, "badplace_delete" },
    { 0x020, "badplace_cylinder" },
    { 0x021, "badplace_arc" },
    { 0x022, "badplace_brush" },
    { 0x023, "clearallcorpses" },
    { 0x024, "setturretnode" },
    { 0x025, "unsetturretnode" },
    { 0x026, "setnodepriority" },
    { 0x027, "isnodeoccupied" },
    { 0x028, "_func_028" }, // empty
    { 0x029, "_func_029" }, // empty
    { 0x02A, "_func_02A" }, // empty
    { 0x02B, "_func_02B" }, // empty
    { 0x02C, "updategamerprofile" },
    { 0x02D, "assertex" },
    { 0x02E, "assertmsg" },
    { 0x02F, "isdefined" },
    { 0x030, "isvalidmissile" },
    { 0x031, "isstring" },
    { 0x032, "setomnvar" },
    { 0x033, "getomnvar" },
    { 0x034, "setdvar" },
    { 0x035, "setdynamicdvar" },
    { 0x036, "setdvarifuninitialized" },
    { 0x037, "setdevdvar" },
    { 0x038, "setdevdvarifuninitialized" },
    { 0x039, "getdvar" },
    { 0x03A, "getdvarint" },
    { 0x03B, "getdvarfloat" },
    { 0x03C, "getdvarvector" },
    { 0x03D, "gettime" },
    { 0x03E, "gettimeutc" },
    { 0x03F, "getradiometricunit" },
    { 0x040, "getentbynum" },
    { 0x041, "getweaponmodel" },
    { 0x042, "getculldist" },
    { 0x043, "sethalfresparticles" },
    { 0x044, "getmapsunlight" },
    { 0x045, "setsunlight" },
    { 0x046, "resetsunlight" },
    { 0x047, "getmapsundirection" },
    { 0x048, "getmapsunangles" },
    { 0x049, "setsundirection" },
    { 0x04A, "lerpsundirection" },
    { 0x04B, "lerpsunangles" },
    { 0x04C, "resetsundirection" },
    { 0x04D, "enableforcedsunshadows" },
    { 0x04E, "enableforcednosunshadows" },
    { 0x04F, "disableforcedsunshadows" },
    { 0x050, "enableouterspacemodellighting" },
    { 0x051, "disableouterspacemodellighting" },
    { 0x052, "remapstage" },
    { 0x053, "changelevel" },
    { 0x054, "missionsuccess" },
    { 0x055, "missionfailed" },
    { 0x056, "cinematic" },
    { 0x057, "cinematicingame" },
    { 0x058, "cinematicingamesync" },
    { 0x059, "cinematicingameloop" },
    { 0x05A, "cinematicingameloopresident" },
    { 0x05B, "iscinematicplaying" },
    { 0x05C, "stopcinematicingame" },
    { 0x05D, "getweapondisplayname" },
    { 0x05E, "getweaponbasename" },
    { 0x05F, "getweaponattachments" },
    { 0x060, "getweaponattachmentdisplaynames" },
    { 0x061, "getweaponcamoname" },
    { 0x062, "getweaponreticlename" },
    { 0x063, "getanimlength" },
    { 0x064, "animhasnotetrack" },
    { 0x065, "getnotetracktimes" },
    { 0x066, "spawn" },
    { 0x067, "spawnloopsound" },
    { 0x068, "spawnloopingsound" },
    { 0x069, "bullettrace" },
    { 0x06A, "target_setmaxsize" },
    { 0x06B, "target_setcolor" },
    { 0x06C, "target_setdelay" },
    { 0x06D, "getstartorigin" },
    { 0x06E, "getstartangles" },
    { 0x06F, "getcycleoriginoffset" },
    { 0x070, "magicgrenade" },
    { 0x071, "magicgrenademanual" },
    { 0x072, "setblur" },
    { 0x073, "musicplay" },
    { 0x074, "musicstop" },
    { 0x075, "soundfade" },
    { 0x076, "addsoundsubmix" },
    { 0x077, "clearsoundsubmix" },
    { 0x078, "clearallsubmixes" },
    { 0x079, "blendsoundsubmix" },
    { 0x07A, "makesoundsubmixsticky" },
    { 0x07B, "makesoundsubmixunsticky" },
    { 0x07C, "soundsettimescalefactor" },
    { 0x07D, "soundresettimescale" },
    { 0x07E, "levelsoundfade" },
    { 0x07F, "precachenightvisioncodeassets" },
    { 0x080, "precachedigitaldistortcodeassets" },
    { 0x081, "precachesonarvisioncodeassets" },
    { 0x082, "precacheminimapsentrycodeassets" },
    { 0x083, "savegame" },
    { 0x084, "issavesuccessful" },
    { 0x085, "issaverecentlyloaded" },
    { 0x086, "savegamenocommit" },
    { 0x087, "commitsave" },
    { 0x088, "commitwouldbevalid" },
    { 0x089, "getfxvisibility" },
    { 0x08A, "setculldist" },
    { 0x08B, "bullettracepassed" },
    { 0x08C, "sighttracepassed" },
    { 0x08D, "physicstrace" },
    { 0x08E, "playerphysicstrace" },
    { 0x08F, "getgroundposition" },
    { 0x090, "getmovedelta" },
    { 0x091, "getangledelta" },
    { 0x092, "getnorthyaw" },
    { 0x093, "getcommandfromkey" },
    { 0x094, "getsticksconfig" },
    { 0x095, "weaponfightdist" },
    { 0x096, "weaponmaxdist" },
    { 0x097, "isturretactive" },
    { 0x098, "target_alloc" },
    { 0x099, "target_flush" },
    { 0x09A, "target_set" },
    { 0x09B, "target_remove" },
    { 0x09C, "target_setshader" },
    { 0x09D, "target_setoffscreenshader" },
    { 0x09E, "target_isinrect" },
    { 0x09F, "target_isincircle" },
    { 0x0A0, "target_startreticlelockon" },
    { 0x0A1, "target_clearreticlelockon" },
    { 0x0A2, "target_getarray" },
    { 0x0A3, "target_istarget" },
    { 0x0A4, "target_setattackmode" },
    { 0x0A5, "target_setjavelinonly" },
    { 0x0A6, "target_hidefromplayer" },
    { 0x0A7, "target_showtoplayer" },
    { 0x0A8, "target_setscaledrendermode" },
    { 0x0A9, "target_drawcornersonly" },
    { 0x0AA, "target_drawsquare" },
    { 0x0AB, "target_drawsingle" },
    { 0x0AC, "target_setminsize" },
    { 0x0AD, "setnorthyaw" },
    { 0x0AE, "setslowmotion" },
    { 0x0AF, "randomint" },
    { 0x0B0, "randomfloat" },
    { 0x0B1, "randomintrange" },
    { 0x0B2, "randomfloatrange" },
    { 0x0B3, "sin" },
    { 0x0B4, "cos" },
    { 0x0B5, "tan" },
    { 0x0B6, "asin" },
    { 0x0B7, "acos" },
    { 0x0B8, "atan" },
    { 0x0B9, "int" },
    { 0x0BA, "float" },
    { 0x0BB, "abs" },
    { 0x0BC, "min" },
    { 0x0BD, "objective_additionalcurrent" },
    { 0x0BE, "objective_ring" },
    { 0x0BF, "objective_setpointertextoverride" },
    { 0x0C0, "getnode" },
    { 0x0C1, "getnodearray" },
    { 0x0C2, "getallnodes" },
    { 0x0C3, "getnodesinradius" },
    { 0x0C4, "getnodesinradiussorted" },
    { 0x0C5, "getclosestnodeinsight" },
    { 0x0C6, "getreflectionlocs" },
    { 0x0C7, "getreflectionreferencelocs" },
    { 0x0C8, "getvehicletracksegment" },
    { 0x0C9, "getvehicletracksegmentarray" },
    { 0x0CA, "getallvehicletracksegments" },
    { 0x0CB, "isarray" },
    { 0x0CC, "isai" },
    { 0x0CD, "getindexforluincstring" },
    { 0x0CE, "issentient" },
    { 0x0CF, "isspawner" },
    { 0x0D0, "getdebugdvar" },
    { 0x0D1, "getdebugdvarint" },
    { 0x0D2, "getdebugdvarfloat" },
    { 0x0D3, "setsaveddvar" },
    { 0x0D4, "getfreeaicount" },
    { 0x0D5, "getaicount" },
    { 0x0D6, "getaiarray" },
    { 0x0D7, "getaispeciesarray" },
    { 0x0D8, "getspawnerarray" },
    { 0x0D9, "getcorpsearray" },
    { 0x0DA, "getspawnerteamarray" },
    { 0x0DB, "getweaponclipmodel" },
    { 0x0DC, "getbrushmodelcenter" },
    { 0x0DD, "getkeybinding" },
    { 0x0DE, "max" },
    { 0x0DF, "floor" },
    { 0x0E0, "ceil" },
    { 0x0E1, "exp" },
    { 0x0E2, "log" },
    { 0x0E3, "sqrt" },
    { 0x0E4, "squared" },
    { 0x0E5, "clamp" },
    { 0x0E6, "angleclamp" },
    { 0x0E7, "angleclamp180" },
    { 0x0E8, "vectorfromlinetopoint" },
    { 0x0E9, "pointonsegmentnearesttopoint" },
    { 0x0EA, "distance" },
    { 0x0EB, "distance2d" },
    { 0x0EC, "distancesquared" },
    { 0x0ED, "length" },
    { 0x0EE, "length2d" },
    { 0x0EF, "lengthsquared" },
    { 0x0F0, "length2dsquared" },
    { 0x0F1, "closer" },
    { 0x0F2, "vectordot" },
    { 0x0F3, "vectorcross" },
    { 0x0F4, "axistoangles" },
    { 0x0F5, "visionsetthermal" },
    { 0x0F6, "visionsetpain" },
    { 0x0F7, "endlobby" },
    { 0x0F8, "setac130ambience" },
    { 0x0F9, "getmapcustom" },
    { 0x0FA, "spawnsighttrace" },
    { 0x0FB, "incrementcounter" },
    { 0x0FC, "getcountertotal" },
    { 0x0FD, "getlevelticks" },
    { 0x0FE, "perlinnoise2d" },
    { 0x0FF, "calcrockingangles" },
    { 0x100, "reconevent" },
    { 0x101, "reconspatialevent" },
    { 0x102, "setsunflareposition" },
    { 0x103, "createthreatbiasgroup" },
    { 0x104, "threatbiasgroupexists" },
    { 0x105, "getthreatbias" },
    { 0x106, "setthreatbias" },
    { 0x107, "setthreatbiasagainstall" },
    { 0x108, "setignoremegroup" },
    { 0x109, "isenemyteam" },
    { 0x10A, "objective_additionalentity" },
    { 0x10B, "objective_state_nomessage" },
    { 0x10C, "objective_string" },
    { 0x10D, "objective_string_nomessage" },
    { 0x10E, "objective_additionalposition" },
    { 0x10F, "objective_current_nomessage" },
    { 0x110, "vectornormalize" },
    { 0x111, "vectortoangles" },
    { 0x112, "vectortoyaw" },
    { 0x113, "vectorlerp" },
    { 0x114, "anglestoup" },
    { 0x115, "anglestoright" },
    { 0x116, "anglestoforward" },
    { 0x117, "anglesdelta" },
    { 0x118, "combineangles" },
    { 0x119, "transformmove" },
    { 0x11A, "rotatevector" },
    { 0x11B, "rotatepointaroundvector" },
    { 0x11C, "issubstr" },
    { 0x11D, "isendstr" },
    { 0x11E, "getsubstr" },
    { 0x11F, "tolower" },
    { 0x120, "strtok" },
    { 0x121, "stricmp" },
    { 0x122, "ambientplay" },
    { 0x123, "getuavstrengthmax" },
    { 0x124, "getuavstrengthlevelneutral" },
    { 0x125, "getuavstrengthlevelshowenemyfastsweep" },
    { 0x126, "getuavstrengthlevelshowenemydirectional" },
    { 0x127, "blockteamradar" },
    { 0x128, "unblockteamradar" },
    { 0x129, "isteamradarblocked" },
    { 0x12A, "getassignedteam" },
    { 0x12B, "setmatchdata" },
    { 0x12C, "getmatchdata" },
    { 0x12D, "sendmatchdata" },
    { 0x12E, "clearmatchdata" },
    { 0x12F, "setmatchdatadef" },
    { 0x130, "setmatchclientip" },
    { 0x131, "setmatchdataid" },
    { 0x132, "setclientmatchdata" },
    { 0x133, "getclientmatchdata" },
    { 0x134, "setclientmatchdatadef" },
    { 0x135, "sendclientmatchdata" },
    { 0x136, "getbuildversion" },
    { 0x137, "getbuildnumber" },
    { 0x138, "getsystemtime" },
    { 0x139, "getmatchrulesdata" },
    { 0x13A, "isusingmatchrulesdata" },
    { 0x13B, "kick" },
    { 0x13C, "issplitscreen" },
    { 0x13D, "setmapcenter" },
    { 0x13E, "setgameendtime" },
    { 0x13F, "visionsetnaked" },
    { 0x140, "visionsetnight" },
    { 0x141, "visionsetmissilecam" },
    { 0x142, "ambientstop" },
    { 0x143, "precachemodel" },
    { 0x144, "precacheshellshock" },
    { 0x145, "precacheitem" },
    { 0x146, "precacheshader" },
    { 0x147, "precachestring" },
    { 0x148, "precachemenu" },
    { 0x149, "precacherumble" },
    { 0x14A, "precachelocationselector" },
    { 0x14B, "precacheleaderboards" },
    { 0x14C, "loadfx" },
    { 0x14D, "playfx" },
    { 0x14E, "playfxontag" },
    { 0x14F, "stopfxontag" },
    { 0x150, "killfxontag" },
    { 0x151, "playloopedfx" },
    { 0x152, "spawnfx" },
    { 0x153, "triggerfx" },
    { 0x154, "playfxontagforclients" },
    { 0x155, "setfxkillondelete" },
    { 0x156, "playimpactheadfatalfx" },
    { 0x157, "setwinningteam" },
    { 0x158, "announcement" },
    { 0x159, "clientannouncement" },
    { 0x15A, "setteammode" },
    { 0x15B, "getteamscore" },
    { 0x15C, "setteamscore" },
    { 0x15D, "setclientnamemode" },
    { 0x15E, "updateclientnames" },
    { 0x15F, "getteamplayersalive" },
    { 0x160, "logprint" },
    { 0x161, "worldentnumber" },
    { 0x162, "obituary" },
    { 0x163, "positionwouldtelefrag" },
    { 0x164, "canspawn" },
    { 0x165, "getstarttime" },
    { 0x166, "precacheheadicon" },
    { 0x167, "precacheminimapicon" },
    { 0x168, "precachempanim" },
    { 0x169, "map_restart" },
    { 0x16A, "exitlevel" },
    { 0x16B, "addtestclient" },
    { 0x16C, "addagent" },
    { 0x16D, "setarchive" },
    { 0x16E, "allclientsprint" },
    { 0x16F, "clientprint" },
    { 0x170, "mapexists" },
    { 0x171, "isvalidgametype" },
    { 0x172, "matchend" },
    { 0x173, "setplayerteamrank" },
    { 0x174, "endparty" },
    { 0x175, "setteamradar" },
    { 0x176, "getteamradar" },
    { 0x177, "setteamradarstrength" },
    { 0x178, "getteamradarstrength" },
    { 0x179, "getuavstrengthmin" },
    { 0x17A, "physicsexplosionsphere" },
    { 0x17B, "physicsexplosioncylinder" },
    { 0x17C, "physicsjolt" },
    { 0x17D, "physicsjitter" },
    { 0x17E, "setexpfog" },
    { 0x17F, "setexpfogext" },
    { 0x180, "setexpfogdvarsonly" },
    { 0x181, "setexpfogextdvarsonly" },
    { 0x182, "setatmosfog" },
    { 0x183, "setatmosfogdvarsonly" },
    { 0x184, "isexplosivedamagemod" },
    { 0x185, "radiusdamage" },
    { 0x186, "setplayerignoreradiusdamage" },
    { 0x187, "glassradiusdamage" },
    { 0x188, "earthquake" },
    { 0x189, "getnumparts" },
    { 0x18A, "objective_onentity" },
    { 0x18B, "objective_onentitywithrotation" },
    { 0x18C, "objective_team" },
    { 0x18D, "objective_player" },
    { 0x18E, "objective_playerteam" },
    { 0x18F, "objective_playerenemyteam" },
    { 0x190, "objective_playermask_hidefromall" },
    { 0x191, "objective_playermask_hidefrom" },
    { 0x192, "objective_playermask_showtoall" },
    { 0x193, "objective_playermask_showto" },
    { 0x194, "iprintln" },
    { 0x195, "iprintlnbold" },
    { 0x196, "logstring" },
    { 0x197, "getent" },
    { 0x198, "getentarray" },
    { 0x199, "getspawnarray" },
    { 0x19A, "spawnplane" },
    { 0x19B, "spawnstruct" },
    { 0x19C, "spawnhelicopter" },
    { 0x19D, "isalive" },
    { 0x19E, "isspawner" },
    { 0x19F, "missile_createattractorent" },
    { 0x1A0, "missile_createattractororigin" },
    { 0x1A1, "missile_createrepulsorent" },
    { 0x1A2, "missile_createrepulsororigin" },
    { 0x1A3, "missile_deleteattractor" },
    { 0x1A4, "playsoundatpos" },
    { 0x1A5, "newhudelem" },
    { 0x1A6, "newclienthudelem" },
    { 0x1A7, "newteamhudelem" },
    { 0x1A8, "resettimeout" },
    { 0x1A9, "isplayer" },
    { 0x1AA, "isplayernumber" },
    { 0x1AB, "getpartname" },
    { 0x1AC, "weaponfiretime" },
    { 0x1AD, "weaponclipsize" },
    { 0x1AE, "weaponisauto" },
    { 0x1AF, "weaponissemiauto" },
    { 0x1B0, "weaponisboltaction" },
    { 0x1B1, "weaponinheritsperks" },
    { 0x1B2, "weaponburstcount" },
    { 0x1B3, "weapontype" },
    { 0x1B4, "weaponclass" },
    { 0x1B5, "getnextarraykey" },
    { 0x1B6, "sortbydistance" },
    { 0x1B7, "tablelookup" },
    { 0x1B8, "tablelookupbyrow" },
    { 0x1B9, "tablelookupistring" },
    { 0x1BA, "tablelookupistringbyrow" },
    { 0x1BB, "tablelookuprownum" },
    { 0x1BC, "tableexists" },
    { 0x1BD, "getmissileowner" },
    { 0x1BE, "magicbullet" },
    { 0x1BF, "getweaponflashtagname" },
    { 0x1C0, "averagepoint" },
    { 0x1C1, "averagenormal" },
    { 0x1C2, "vehicle_getspawnerarray" },
    { 0x1C3, "playrumbleonposition" },
    { 0x1C4, "playrumblelooponposition" },
    { 0x1C5, "stopallrumbles" },
    { 0x1C6, "soundexists" },
    { 0x1C7, "openfile" },
    { 0x1C8, "closefile" },
    { 0x1C9, "fprintln" },
    { 0x1CA, "fprintfields" },
    { 0x1CB, "freadln" },
    { 0x1CC, "fgetarg" },
    { 0x1CD, "setminimap" },
    { 0x1CE, "setthermalbodymaterial" },
    { 0x1CF, "getarraykeys" },
    { 0x1D0, "getfirstarraykey" },
    { 0x1D1, "getglass" },
    { 0x1D2, "getglassarray" },
    { 0x1D3, "getglassorigin" },
    { 0x1D4, "isglassdestroyed" },
    { 0x1D5, "destroyglass" },
    { 0x1D6, "deleteglass" },
    { 0x1D7, "getentchannelscount" },
    { 0x1D8, "getentchannelname" },
    { 0x1D9, "objective_add" },
    { 0x1DA, "objective_delete" },
    { 0x1DB, "objective_state" },
    { 0x1DC, "objective_icon" },
    { 0x1DD, "objective_position" },
    { 0x1DE, "objective_current" },
    { 0x1DF, "weaponinventorytype" },
    { 0x1E0, "weaponstartammo" },
    { 0x1E1, "weaponmaxammo" },
    { 0x1E2, "weaponaltweaponname" },
    { 0x1E3, "isweaponcliponly" },
    { 0x1E4, "isweapondetonationtimed" },
    { 0x1E5, "isweaponmanuallydetonatedbyemptythrow" },
    { 0x1E6, "weaponhasthermalscope" },
    { 0x1E7, "getvehiclenode" },
    { 0x1E8, "getvehiclenodearray" },
    { 0x1E9, "getallvehiclenodes" },
    { 0x1EA, "getnumvehicles" },
    { 0x1EB, "precachevehicle" },
    { 0x1EC, "spawnvehicle" },
    { 0x1ED, "vehicle_getarray" },
    { 0x1EE, "pow" },
    { 0x1EF, "angleclamp360" },
    { 0x1F0, "botgetmemoryevents" },
    { 0x1F1, "botautoconnectenabled" },
    { 0x1F2, "botzonegetcount" },
    { 0x1F3, "botzonesetteam" },
    { 0x1F4, "botzonenearestcount" },
    { 0x1F5, "botmemoryflags" },
    { 0x1F6, "botflagmemoryevents" },
    { 0x1F7, "botzonegetindoorpercent" },
    { 0x1F8, "botsentientswap" },
    { 0x1F9, "isbot" },
    { 0x1FA, "isagent" },
    { 0x1FB, "getmaxagents" },
    { 0x1FC, "botdebugdrawtrigger" },
    { 0x1FD, "botgetclosestnavigablepoint" },
    { 0x1FE, "getnodesintrigger" },
    { 0x1FF, "nodesvisible" },
    { 0x200, "getnodesonpath" },
    { 0x201, "getzonecount" },
    { 0x202, "getzonenearest" },
    { 0x203, "getzonenodes" },
    { 0x204, "getzonepath" },
    { 0x205, "getzoneorigin" },
    { 0x206, "getnodezone" },
    { 0x207, "getzonenodesbydist" },
    { 0x208, "getzonenodeforindex" },
    { 0x209, "getweaponexplosionradius" },
    { 0x20A, "markdangerousnodes" },
    { 0x20B, "markdangerousnodesintrigger" },
    { 0x20C, "nodeexposedtosky" },
    { 0x20D, "findentrances" },
    { 0x20E, "badplace_global" },
    { 0x20F, "getpathdist" },
    { 0x210, "getlinkednodes" },
    { 0x211, "disconnectnodepair" },
    { 0x212, "connectnodepair" },
    { 0x213, "gettimesincelastpaused" },
    { 0x214, "precachefxontag" },
    { 0x215, "precachetag" },
    { 0x216, "precachesound" },
    { 0x217, "devsetminimapdvarsettings" },
    { 0x218, "loadtransient" },
    { 0x219, "unloadtransient" },
    { 0x21A, "unloadalltransients" },
    { 0x21B, "synctransients" },
    { 0x21C, "aretransientsbusy" },
    { 0x21D, "istransientqueued" },
    { 0x21E, "istransientloaded" },
    { 0x21F, "loadstartpointtransient" },
    { 0x220, "distance2dsquared" },
    { 0x221, "getangledelta3d" },
    { 0x222, "activateclientexploder" },
    { 0x223, "trajectorycalculateinitialvelocity" },
    { 0x224, "trajectorycalculateminimumvelocity" },
    { 0x225, "trajectorycalculateexitangle" },
    { 0x226, "trajectoryestimatedesiredinairtime" },
    { 0x227, "trajectorycomputedeltaheightattime" },
    { 0x228, "trajectorycanattemptaccuratejump" },
    { 0x229, "adddebugcommand" },
    { 0x22A, "ispointinvolume" },
    { 0x22B, "cinematicgettimeinmsec" },
    { 0x22C, "cinematicgetframe" },
    { 0x22D, "iscinematicloaded" },
    { 0x22E, "bbprint" },
    { 0x22F, "getenemysquaddata" },
    { 0x230, "lookupsoundlength" },
    { 0x231, "getscriptablearray" },
    { 0x232, "clearfog" },
    { 0x233, "setleveldopplerpreset" },
    { 0x234, "screenshake" },
    { 0x235, "isusinghdr" },
    { 0x236, "isusingssao" },
    { 0x237, "grantloot" },
    { 0x238, "playerphysicstraceinfo" },
    { 0x239, "getminchargetime" },
    { 0x23A, "getchargetimepershot" },
    { 0x23B, "getmaxchargeshots" },
    { 0x23C, "weaponischargeable" },
    { 0x23D, "weaponusesheat" },
    { 0x23E, "lootserviceonendgame" },
    { 0x23F, "luinotifyevent" },
    { 0x240, "lootserviceonstartgame" },
    { 0x241, "tournamentreportplayerspm" },
    { 0x242, "tournamentreportwinningteam" },
    { 0x243, "tournamentreportendofgame" },
    { 0x244, "wakeupphysicssphere" },
    { 0x245, "dopplerpitch" },
    { 0x246, "piecewiselinearlookup" },
    { 0x247, "anglestoaxis" },
    { 0x248, "visionsetwater" },
    { 0x249, "sendscriptusageanalysisdata" },
    { 0x24A, "resetscriptusageanalysisdata" },
    { 0x24B, "instantlylogusageanalysisdata" },
    { 0x24C, "invertangles" },
    { 0x24D, "rotatevectorinverted" },
    { 0x24E, "calculatestartorientation" },
    { 0x24F, "droptoground" },
    { 0x250, "setdemigodmode" },
    { 0x251, "precachelaser" },
    { 0x252, "getcsplinecount" },
    { 0x253, "getcsplinepointcount" },
    { 0x254, "getcsplinelength" },
    { 0x255, "getcsplinepointid" },
    { 0x256, "getcsplinepointlabel" },
    { 0x257, "getcsplinepointtension" },
    { 0x258, "getcsplinepointposition" },
    { 0x259, "getcsplinepointcorridordims" },
    { 0x25A, "getcsplinepointtangent" },
    { 0x25B, "getcsplinepointdisttonextpoint" },
    { 0x25C, "calccsplineposition" },
    { 0x25D, "calccsplinetangent" },
    { 0x25E, "calccsplinecorridor" },
    { 0x25F, "setnojipscore" },
    { 0x260, "setnojiptime" },
    { 0x261, "getpredictedentityposition" },
    { 0x262, "gamedvrprohibitrecording" },
    { 0x263, "gamedvrstartrecording" },
    { 0x264, "gamedvrstoprecording" },
    { 0x265, "gamedvrsetvideometadata" },
    { 0x266, "gamedvrprohibitscreenshots" },
    { 0x267, "gamedvrsetscreenshotmetadata" },
    { 0x268, "queuedialog" },
    { 0x269, "speechenablegrammar" },
    { 0x26A, "speechenable" },
    { 0x26B, "livestreamingenable" },
    { 0x26C, "livestreamingsetbitrate" },
    { 0x26D, "livestreamingsetmetadata" },
    { 0x26E, "livestreamingenablearchiving" },
    { 0x26F, "triggerportableradarping" },
    { 0x270, "setglaregrimematerial" },
    { 0x271, "botgetteamlimit" },
    { 0x272, "spawnfxforclient" },
    { 0x273, "botgetteamdifficulty" },
    { 0x274, "debugstar" },
    { 0x275, "newdebughudelem" },
    { 0x276, "printlightsetsettings" },
    { 0x277, "lightsetdumpstate" },
    { 0x278, "getsquadassaultelo" },
    { 0x279, "loadluifile" },
    { 0x27A, "isdedicatedserver" },
    { 0x27B, "getplaylistversion" },
    { 0x27C, "getplaylistid" },
    { 0x27D, "getactiveclientcount" },
    { 0x27E, "issquadsmode" },
    { 0x27F, "getsquadassaultsquadindex" },
    { 0x280, "visionsetpostapply" },
    { 0x281, "addbot" },
    { 0x282, "ishairrunning" },
    { 0x283, "getnearbyarrayelements" },
    { 0x284, "vectorclamp" },
    { 0x285, "isalliedsentient" },
    { 0x286, "istestclient" },
    { 0x287, "getrandomnodedestination" },
    { 0x288, "debuglocalizestring" },
    { 0x289, "enablesoundcontextoverride" },
    { 0x28A, "disablesoundcontextoverride" },
    { 0x28B, "notifyoncommandremove" },
    { 0x28C, "getsndaliasvalue" },
    { 0x28D, "setsndaliasvalue" },
    { 0x28E, "packedtablelookup" },
    { 0x28F, "packedtablesectionlookup" },
    { 0x290, "packedtablelookupwithrange" },
    { 0x291, "grappletrace" },
    { 0x292, "stopclientexploder" },
    { 0x293, "closestpointstwosegs" },
    { 0x294, "isremovedentity" },
    { 0x295, "tablegetrowcount" },
    { 0x296, "tablegetcolumncount" },
    { 0x297, "batteryusepershot" },
    { 0x298, "batteryreqtouse" },
    { 0x299, "isweaponmanuallydetonatedbydoubletap" },
    { 0x29A, "grapplegetmagnets" },
    { 0x29B, "getweaponname" },
    { 0x29C, "activatepersistentclientexploder" },
    { 0x29D, "deployriotshield" },
    { 0x29E, "validatecostume" },
    { 0x29F, "randomcostume" },
    { 0x2A0, "shootblank" },
    { 0x2A1, "boidflockupdate" },
    { 0x2A2, "debuggetanimname" },
    { 0x2A3, "setspmatchdata" },
    { 0x2A4, "getspmatchdata" },
    { 0x2A5, "sendspmatchdata" },
    { 0x2A6, "clearspmatchdata" },
    { 0x2A7, "setspmatchdatadef" },
    { 0x2A8, "playcinematicforall" },
    { 0x2A9, "preloadcinematicforall" },
    { 0x2AA, "stopcinematicforall" },
    { 0x2AB, "capsuletracepassed" },
    { 0x2AC, "stopfxontagforclient" },
    { 0x2AD, "killfxontagforclient" },
    { 0x2AE, "isvector" },
    { 0x2AF, "notifychallengecomplete" },
    { 0x2B0, "lootservicestarttrackingplaytime" },
    { 0x2B1, "lootservicestoptrackingplaytime" },
    { 0x2B2, "lootservicevalidateplaytime" },
    { 0x2B3, "recordbreadcrumbdataforplayer" },
    { 0x2B4, "getweaponandattachmentmodels" },
    { 0x2B5, "changewhizbyautosimparams" },
    { 0x2B6, "sysprint" },
    { 0x2B7, "objective_mlgspectator" },
    { 0x2B8, "setspcheckpointdata" },
    { 0x2B9, "getspcheckpointdata" },
    { 0x2BA, "isnumber" },
    { 0x2BB, "isonlinegame" },
    { 0x2BC, "issystemlink" },
    { 0x2BD, "setsoundmasteringfadetime" },
    { 0x2BE, "getstanceandmotionstateforplayer" },
    { 0x2BF, "nodeisnotusable" },
    { 0x2C0, "nodesetnotusable" },
    { 0x2C1, "spawnlinkedfx" },
    { 0x2C2, "spawnlinkedfxforclient" },
    { 0x2C3, "getplaylistname" },
    { 0x2C4, "getlocaltimestring" },
    { 0x2C5, "isonwifi" },
    { 0x2C6, "getbuttonsconfig" },
    { 0x2C7, "getchallengeid" },
    { 0x2C8, "nodehasremotemissileset" },
    { 0x2C9, "nodegetremotemissilename" },
    { 0x2CA, "remotemissileenttracetooriginpassed" },
    { 0x2CB, "bombingruntracepassed" },
    { 0x2CC, "soundsettraceflags" },
    { 0x2CD, "handlepickupdeployedriotshields" },
    { 0x2CE, "getcodanywherecurrentplatform" },
    { 0x2CF, "getcostumefromtable" },
    { 0x2D0, "visionsetoverdrive" },
    { 0x2D1, "nodegetsplitgroup" },
    { 0x2D2, "recordbreadcrumbdataforplayersp" },
    { 0x2D3, "getchallengerewarditem" },
    { 0x2D4, "setentplayerxuidforemblem" },
    { 0x2D5, "resetentplayerxuidforemblems" },
    { 0x2D6, "nodesetremotemissilename" },
    { 0x2D7, "isshipbuild" },
    { 0x2D8, "strinsertnumericdelimiters" },
    { 0x2D9, "isscriptedagent" },
    { 0x2DA, "playfxonweapon" },
    { 0x2DB, "stopfxonweapon" },
    { 0x2DC, "killfxonweapon" },
    { 0x2DD, "_func_2DD" }, // MP 0x140339100
    { 0x2DE, "_func_2DE" }, // MP 0x140319200
    { 0x2DF, "_func_2DF" }, // MP 0x140331E00
}};

} // namespace xsk::gsc::s1_pc

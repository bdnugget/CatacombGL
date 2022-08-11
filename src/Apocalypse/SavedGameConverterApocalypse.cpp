// Copyright (C) 2022 Arno Ansems
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

#include "SavedGameConverterApocalypse.h"

static const DosFormatConfig dosFormatConfigApocalypse =
{
    "CATACOMB  APOCALYPSE 3-D", // gameName
    "0.01", // saveVersion
    {
        HeaderTtemSkyColor, HeaderItemGroundColor, HeaderItemFreezeTime, HeaderItemDifficulty, HeaderItemMapOn, HeaderItemBolts, HeaderItemNukes, HeaderItemPotions,
        HeaderItemKeys, HeaderItemScrolls, HeaderItemGems, HeaderItemScore, HeaderItemBody, HeaderItemShotpower,
        HeaderItemMapWidth, HeaderItemMapHeight, HeaderItemEasyModeOn
    },   // headerItems
    {
        ObjectTiccount, ObjectState32,
        ObjectX, ObjectY, ObjectViewX, ObjectTileX, ObjectTileY, ObjectViewHeight, ObjectSize,
        ObjectNext, ObjectPrev, ObjectActive, ObjectObclass, ObjectFlags, ObjectDistance, ObjectDir,
        ObjectAngle, ObjectHitpoints, ObjectSpeed, ObjectXL, ObjectXH, ObjectYL, ObjectYH,
        ObjectTemp1, ObjectTemp2,
    }   // objectItems
};

SavedGameConverterApocalypse::SavedGameConverterApocalypse()
{
}

SavedGameConverterApocalypse::~SavedGameConverterApocalypse()
{
}

const DosFormatConfig& SavedGameConverterApocalypse::GetDosFormatConfig() const
{
    return dosFormatConfigApocalypse;
}

const uint16_t SavedGameConverterApocalypse::GetActorId(const uint16_t obclass, const uint16_t state16, const uint32_t state32) const
{
    // TODO
    return 0;
}
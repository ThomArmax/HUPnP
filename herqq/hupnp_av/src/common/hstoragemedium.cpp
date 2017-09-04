/*
 *  Copyright (C) 2011 Tuomo Penttinen, all rights reserved.
 *
 *  Author: Tuomo Penttinen <tp@herqq.org>
 *
 *  This file is part of Herqq UPnP Av (HUPnPAv) library.
 *
 *  Herqq UPnP Av is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Herqq UPnP Av is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Herqq UPnP Av. If not, see <http://www.gnu.org/licenses/>.
 */

#include "hstoragemedium.h"

#include <HUpnpCore/private/hmisc_utils_p.h>

namespace Herqq
{

namespace Upnp
{

namespace Av
{

/*******************************************************************************
 * HStorageMedium
 ******************************************************************************/
HStorageMedium::HStorageMedium() :
    m_typeAsString(toString(Unknown)), m_type(Unknown)
{
}

HStorageMedium::HStorageMedium(Type arg) :
    m_typeAsString(toString(arg)), m_type(arg)
{
}

HStorageMedium::HStorageMedium(const QString& arg) :
    m_typeAsString(), m_type()
{
    QString trimmed = arg.trimmed();
    m_typeAsString = trimmed;
    m_type = fromString(trimmed);
}

QString HStorageMedium::toString(Type type)
{
    QString retVal;
    switch(type)
    {
    case Unknown:
        retVal = "UNKNOWN";
        break;
    case DigitalVideo:
        retVal = "DV";
        break;
    case MiniDigitalVideo:
        retVal = "MINI-DV";
        break;
    case VHS:
        retVal = "VHS";
        break;
    case W_VHS:
        retVal = "W-VHS";
        break;
    case S_VHS:
        retVal = "S-VHS";
        break;
    case D_VHS:
        retVal = "D-VHS";
        break;
    case VHSC:
        retVal = "VHSC";
        break;
    case Video8:
        retVal = "VIDEO8";
        break;
    case HI8:
        retVal = "HI8";
        break;
    case CD_ROM:
        retVal = "CD-ROM";
        break;
    case CD_DA:
        retVal = "CD-DA";
        break;
    case CD_R:
        retVal = "CD-R";
        break;
    case CD_RW:
        retVal = "CD-RW";
        break;
    case Video_CD:
        retVal = "VIDEO-CD";
        break;
    case SACD:
        retVal = "SACD";
        break;
    case MiniDiscAudio:
        retVal = "MD-AUDIO";
        break;
    case MiniDiscPicture:
        retVal = "MD-PICTURE";
        break;
    case DVD_ROM:
        retVal = "DVD-ROM";
        break;
    case DVD_Video:
        retVal = "DVD-VIDEO";
        break;
    case DVD_PlusRecordable:
        retVal = "DVD+R";
        break;
    case DVD_MinusRecordable:
        retVal = "DVD-R";
        break;
    case DVD_PlusRewritable:
        retVal = "DVD+RW";
        break;
    case DVD_MinusRewritable:
        retVal = "DVD-RW";
        break;
    case DVD_RAM:
        retVal = "DVD-RAM";
        break;
    case DVD_Audio:
        retVal = "DVD-AUDIO";
        break;
    case DAT:
        retVal = "DAT";
        break;
    case LD:
        retVal = "LD";
        break;
    case HDD:
        retVal = "HDD";
        break;
    case MicroMV:
        retVal = "MICRO-MV";
        break;
    case Network:
        retVal = "NETWORK";
        break;
    case None:
        retVal = "NONE";
        break;
    case NotImplemented:
        retVal = "NOT_IMPLEMENTED";
        break;
    case SecureDigital:
        retVal = "SD";
        break;
    case PC_Card:
        retVal = "PC-CARD";
        break;
    case MultimediaCard:
        retVal = "MMC";
        break;
    case CompactFlash:
        retVal = "CF";
        break;
    case BluRay:
        retVal = "BD";
        break;
    case MemoryStick:
        retVal = "MS";
        break;
    case HD_DVD:
        retVal = "HD_DVD";
        break;
    default:
        break;
    }
    return retVal;
}

HStorageMedium::Type HStorageMedium::fromString(const QString& type)
{
    Type retVal = Unknown;
    if (type.compare(QString("UNKNOWN"), Qt::CaseInsensitive) == 0)
    {
        retVal = Unknown;
    }
    else if (type.compare(QString("DV"), Qt::CaseInsensitive) == 0)
    {
        retVal = DigitalVideo;
    }
    else if (type.compare(QString("VHS"), Qt::CaseInsensitive) == 0)
    {
        retVal = VHS;
    }
    else if (type.compare(QString("W-VHS"), Qt::CaseInsensitive) == 0)
    {
        retVal = W_VHS;
    }
    else if (type.compare(QString("S-VHS"), Qt::CaseInsensitive) == 0)
    {
        retVal = S_VHS;
    }
    else if (type.compare(QString("D_VHS"), Qt::CaseInsensitive) == 0)
    {
        retVal = D_VHS;
    }
    else if (type.compare(QString("VHSC"), Qt::CaseInsensitive) == 0)
    {
        retVal = VHSC;
    }
    else if (type.compare(QString("VIDEO8"), Qt::CaseInsensitive) == 0)
    {
        retVal = Video8;
    }
    else if (type.compare(QString("HI8"), Qt::CaseInsensitive) == 0)
    {
        retVal = HI8;
    }
    else if (type.compare(QString("CD-ROM"), Qt::CaseInsensitive) == 0)
    {
        retVal = CD_ROM;
    }
    else if (type.compare(QString("CD-DA"), Qt::CaseInsensitive) == 0)
    {
        retVal = CD_DA;
    }
    else if (type.compare(QString("CD-R"), Qt::CaseInsensitive) == 0)
    {
        retVal = CD_R;
    }
    else if (type.compare(QString("CD-RW"), Qt::CaseInsensitive) == 0)
    {
        retVal = CD_RW;
    }
    else if (type.compare(QString("VIDEO-CD"), Qt::CaseInsensitive) == 0)
    {
        retVal = Video_CD;
    }
    else if (type.compare(QString("SACD"), Qt::CaseInsensitive) == 0)
    {
        retVal = SACD;
    }
    else if (type.compare(QString("MD-AUDIO"), Qt::CaseInsensitive) == 0)
    {
        retVal = MiniDiscAudio;
    }
    else if (type.compare(QString("MD-PICTURE"), Qt::CaseInsensitive) == 0)
    {
        retVal = MiniDiscPicture;
    }
    else if (type.compare(QString("DVD-ROM"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_ROM;
    }
    else if (type.compare(QString("DVD-VIDEO"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_Video;
    }
    else if (type.compare(QString("DVD+R"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_PlusRecordable;
    }
    else if (type.compare(QString("DVD-R"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_MinusRecordable;
    }
    else if (type.compare(QString("DVD+RW"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_PlusRewritable;
    }
    else if (type.compare(QString("DVD-RW"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_MinusRewritable;
    }
    else if (type.compare(QString("DVD-RAM"), Qt::CaseInsensitive) == 0)
    {
        retVal = DVD_RAM;
    }
    else if (type.compare(QString("DAT"), Qt::CaseInsensitive) == 0)
    {
        retVal = DAT;
    }
    else if (type.compare(QString("LD"), Qt::CaseInsensitive) == 0)
    {
        retVal = LD;
    }
    else if (type.compare(QString("HDD"), Qt::CaseInsensitive) == 0)
    {
        retVal = HDD;
    }
    else if (type.compare(QString("MICRO-MV"), Qt::CaseInsensitive) == 0)
    {
        retVal = MicroMV;
    }
    else if (type.compare(QString("NETWORK"), Qt::CaseInsensitive) == 0)
    {
        retVal = Network;
    }
    else if (type.compare(QString("NONE"), Qt::CaseInsensitive) == 0)
    {
        retVal = None;
    }
    else if (type.compare(QString("NOT_IMPLEMENTED"), Qt::CaseInsensitive) == 0)
    {
        retVal = NotImplemented;
    }
    else if (type.compare(QString("SD"), Qt::CaseInsensitive) == 0)
    {
        retVal = SecureDigital;
    }
    else if (type.compare(QString("PC-CARD"), Qt::CaseInsensitive) == 0)
    {
        retVal = PC_Card;
    }
    else if (type.compare(QString("MMC"), Qt::CaseInsensitive) == 0)
    {
        retVal = MultimediaCard;
    }
    else if (type.compare(QString("CF"), Qt::CaseInsensitive) == 0)
    {
        retVal = CompactFlash;
    }
    else if (type.compare(QString("BD"), Qt::CaseInsensitive) == 0)
    {
        retVal = BluRay;
    }
    else if (type.compare(QString("MS"), Qt::CaseInsensitive) == 0)
    {
        retVal = MemoryStick;
    }
    else if (type.compare(QString("HD_DVD"), Qt::CaseInsensitive) == 0)
    {
        retVal = HD_DVD;
    }
    else if (!type.isEmpty())
    {
        retVal = VendorDefined;
    }
    return retVal;
}

bool operator==(const HStorageMedium& obj1, const HStorageMedium& obj2)
{
    return obj1.toString() == obj2.toString();
}

quint32 qHash(const HStorageMedium& key)
{
    QByteArray data = key.toString().toLocal8Bit();
    return hash(data.constData(), data.size());
}

}
}
}

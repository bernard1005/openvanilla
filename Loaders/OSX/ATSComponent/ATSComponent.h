// ATSComponent.h: text service component constants

// The constants defined here are only meaningful for ATSComponent.r

#ifndef __ATSComponent_h
#define __ATSComponent_h

#define ATSCVERSION             0x00010000
#define ATSCSCRIPT              2           // smTradCinese
#define ATSCLANGUAGE            19          // langtradChinese
#define ATSCBASERESOURCEID      16896       // (15872+script_id*512) here script_id=smTradChinese

#define ATSCPENCILMENUID        ATSCBASERESOURCEID+1
#define ATSCBUNDLENAME          "org.openvanilla.ovinit"
#define ATSCBNLENGTH            $"16"       // in hexadecimal
#define ATSCIMNAME              "OpenVanilla Loader 0.7.1"
#define ATSCIMNLENGTH           $"18"       // in hexadecimal
#define ATSCVENDORCODE          'opvn'

#endif

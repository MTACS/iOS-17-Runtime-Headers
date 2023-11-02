
@interface UIStatusBarComposedData : NSObject <NSCopying> {
    NSString * _doubleHeightStatus;
    bool  _itemEnabled;
    struct { 
        bool itemIsEnabled[46]; 
        BOOL timeString[64]; 
        BOOL shortTimeString[64]; 
        BOOL dateString[256]; 
        int gsmSignalStrengthRaw; 
        int secondaryGsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        int secondaryGsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL secondaryServiceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL secondaryServiceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        unsigned int secondaryServiceContentType; 
        unsigned int cellLowDataModeActive : 1; 
        unsigned int secondaryCellLowDataModeActive : 1; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int wifiLowDataModeActive : 1; 
        unsigned int dataNetworkType; 
        unsigned int secondaryDataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 2; 
        unsigned int voiceControlIconType : 2; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int radarAvailable : 1; 
        unsigned int announceNotificationsAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
        unsigned int wifiSearching : 1; 
        double backgroundActivityDisplayStartDate; 
        unsigned int shouldShowEmergencyOnlyStatus : 1; 
        unsigned int emergencyOnly : 1; 
        unsigned int secondaryCellularConfigured : 1; 
        BOOL primaryServiceBadgeString[100]; 
        BOOL secondaryServiceBadgeString[100]; 
        BOOL quietModeImage[256]; 
        BOOL quietModeName[256]; 
    }  _rawData;
    UISystemNavigationAction * _systemNavigationItem;
}

@property (nonatomic, copy) NSString *doubleHeightStatus;
@property (nonatomic, readonly) struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*rawData;
@property (nonatomic, retain) UISystemNavigationAction *systemNavigationItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doubleHeightStatus;
- (id)initWithRawData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isItemEnabled:(int)arg1;
- (struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)rawData;
- (void)setDoubleHeightStatus:(id)arg1;
- (void)setItem:(int)arg1 enabled:(bool)arg2;
- (void)setSystemNavigationItem:(id)arg1;
- (id)systemNavigationItem;

@end

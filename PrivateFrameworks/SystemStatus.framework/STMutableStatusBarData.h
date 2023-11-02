
@interface STMutableStatusBarData : STStatusBarData

@property (nonatomic, copy) STStatusBarDataActivityEntry *activityEntry;
@property (nonatomic, copy) STStatusBarDataEntry *airPlayEntry;
@property (nonatomic, copy) STStatusBarDataEntry *airplaneModeEntry;
@property (nonatomic, copy) STStatusBarDataEntry *alarmEntry;
@property (nonatomic, copy) STStatusBarDataBoolEntry *announceNotificationsEntry;
@property (nonatomic, copy) STStatusBarDataEntry *assistantEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *backNavigationEntry;
@property (nonatomic, copy) STStatusBarDataBackgroundActivityEntry *backgroundActivityEntry;
@property (nonatomic, copy) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (nonatomic, copy) STStatusBarDataEntry *carPlayEntry;
@property (nonatomic, copy) STStatusBarDataCellularEntry *cellularEntry;
@property (nonatomic, copy) STStatusBarDataImageEntry *controlCenterEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *dateEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *deviceNameEntry;
@property (nonatomic, copy) STStatusBarDataEntry *displayWarningEntry;
@property (nonatomic, copy) STStatusBarDataBoolEntry *electronicTollCollectionEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *forwardNavigationEntry;
@property (nonatomic, copy) STStatusBarDataEntry *liquidDetectionEntry;
@property (nonatomic, copy) STStatusBarDataLocationEntry *locationEntry;
@property (nonatomic, copy) STStatusBarDataLockEntry *lockEntry;
@property (nonatomic, copy) STStatusBarDataBatteryEntry *mainBatteryEntry;
@property (nonatomic, copy) STStatusBarDataEntry *nikeEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *personNameEntry;
@property (nonatomic, copy) STStatusBarDataQuietModeEntry *quietModeEntry;
@property (nonatomic, copy) STStatusBarDataBoolEntry *radarEntry;
@property (nonatomic, copy) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (nonatomic, copy) STStatusBarDataEntry *rotationLockEntry;
@property (nonatomic, copy) STStatusBarDataEntry *satelliteEntry;
@property (nonatomic, copy) STStatusBarDataCellularEntry *secondaryCellularEntry;
@property (nonatomic, copy) STStatusBarDataEntry *sensorActivityEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *shortTimeEntry;
@property (nonatomic, copy) STStatusBarDataEntry *studentEntry;
@property (nonatomic, copy) STStatusBarDataTetheringEntry *tetheringEntry;
@property (nonatomic, copy) STStatusBarDataThermalEntry *thermalEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *timeEntry;
@property (nonatomic, copy) STStatusBarDataEntry *ttyEntry;
@property (nonatomic, copy) STStatusBarDataVoiceControlEntry *voiceControlEntry;
@property (nonatomic, copy) STStatusBarDataIntegerEntry *volumeEntry;
@property (nonatomic, copy) STStatusBarDataEntry *vpnEntry;
@property (nonatomic, copy) STStatusBarDataWifiEntry *wifiEntry;

// Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus

+ (bool)supportsSecureCoding;

- (void)_applyUpdate:(id)arg1 keys:(id)arg2;
- (void)applyUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)immutableCopy;
- (void)makeUpdateFromData:(id)arg1;
- (id)mutableCopy;
- (void)setActivityEntry:(id)arg1;
- (void)setAirPlayEntry:(id)arg1;
- (void)setAirplaneModeEntry:(id)arg1;
- (void)setAlarmEntry:(id)arg1;
- (void)setAnnounceNotificationsEntry:(id)arg1;
- (void)setAssistantEntry:(id)arg1;
- (void)setBackNavigationEntry:(id)arg1;
- (void)setBackgroundActivityEntry:(id)arg1;
- (void)setBluetoothEntry:(id)arg1;
- (void)setCarPlayEntry:(id)arg1;
- (void)setCellularEntry:(id)arg1;
- (void)setControlCenterEntry:(id)arg1;
- (void)setDateEntry:(id)arg1;
- (void)setDeviceNameEntry:(id)arg1;
- (void)setDisplayWarningEntry:(id)arg1;
- (void)setElectronicTollCollectionEntry:(id)arg1;
- (void)setEntry:(id)arg1 forKey:(id)arg2;
- (void)setForwardNavigationEntry:(id)arg1;
- (void)setLiquidDetectionEntry:(id)arg1;
- (void)setLocationEntry:(id)arg1;
- (void)setLockEntry:(id)arg1;
- (void)setMainBatteryEntry:(id)arg1;
- (void)setNikeEntry:(id)arg1;
- (void)setPersonNameEntry:(id)arg1;
- (void)setQuietModeEntry:(id)arg1;
- (void)setRadarEntry:(id)arg1;
- (void)setRingerSilenceEntry:(id)arg1;
- (void)setRotationLockEntry:(id)arg1;
- (void)setSatelliteEntry:(id)arg1;
- (void)setSecondaryCellularEntry:(id)arg1;
- (void)setSensorActivityEntry:(id)arg1;
- (void)setShortTimeEntry:(id)arg1;
- (void)setStudentEntry:(id)arg1;
- (void)setTetheringEntry:(id)arg1;
- (void)setThermalEntry:(id)arg1;
- (void)setTimeEntry:(id)arg1;
- (void)setTtyEntry:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVoiceControlEntry:(id)arg1;
- (void)setVolumeEntry:(id)arg1;
- (void)setVpnEntry:(id)arg1;
- (void)setWifiEntry:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

+ (id)_sampleCellularEntryWithSeed:(float)arg1 key:(id)arg2 entryKeys:(id)arg3 enabledEntryKeys:(id)arg4;
+ (id)orderedEntryKeys;
+ (id)sampleDataWithSeed:(float)arg1 entryKeys:(id)arg2 enabledEntryKeys:(id)arg3;
+ (id)subsetOfEntryKeys:(id)arg1 withPercentage:(float)arg2;

- (struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)legacyData;
- (id)subDataWithSupportedLegacyEntries;

@end

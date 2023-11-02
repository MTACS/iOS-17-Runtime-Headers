
@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem {
    NSDate * _debounceDate;
    long long  _fakeNetworkStrength;
    NSString * _forceCurrentDeviceNetworkSSID;
    bool  _initialSetup;
    unsigned long long  _networkInfoType;
    NSDictionary * _wifiInfo;
}

@property (nonatomic, retain) NSDate *debounceDate;
@property (nonatomic) long long fakeNetworkStrength;
@property (nonatomic, retain) NSString *forceCurrentDeviceNetworkSSID;
@property (nonatomic) bool initialSetup;
@property (nonatomic) unsigned long long networkInfoType;
@property (nonatomic, readonly) bool supportsWiFiStrengthDisplay;
@property (nonatomic, retain) NSDictionary *wifiInfo;

- (void).cxx_destruct;
- (id)_accessoryMACAddress;
- (id)_accessoryNetworkSSID;
- (id)_currentDeviceNetworkSSID;
- (id)_extractWiFiInfo:(id)arg1;
- (id)_getSignalStrengthIcon:(id)arg1 forFastUpdate:(bool)arg2;
- (long long)_getWiFiStrength:(id)arg1 forFastUpdate:(bool)arg2;
- (bool)_hiddenForType:(unsigned long long)arg1;
- (bool)_isFirstPartyAccessory:(id)arg1;
- (id)_localizedDescriptionForType:(unsigned long long)arg1;
- (id)_localizedTitleForType:(unsigned long long)arg1;
- (unsigned long long)_nextNetworkInfoType;
- (bool)_showSignalStrength:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_updateAccessoryWifiInfo;
- (id)debounceDate;
- (long long)fakeNetworkStrength;
- (id)forceCurrentDeviceNetworkSSID;
- (unsigned long long)infoType;
- (id)initWithAccessory:(id)arg1;
- (bool)initialSetup;
- (unsigned long long)networkInfoType;
- (void)setDebounceDate:(id)arg1;
- (void)setFakeNetworkStrength:(long long)arg1;
- (void)setForceCurrentDeviceNetworkSSID:(id)arg1;
- (void)setInitialSetup:(bool)arg1;
- (void)setNetworkInfoType:(unsigned long long)arg1;
- (void)setWifiInfo:(id)arg1;
- (bool)supportsWiFiStrengthDisplay;
- (void)toggleNetworkInfoType;
- (id)wifiInfo;

@end


@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {
    struct __SCDynamicStore { } * _prefs;
    struct __CFString { } * _tetheringLink;
    struct __CFString { } * _wifiInterface;
    struct __CFString { } * _wifiKey;
}

+ (id)sharedInstance;
+ (bool)wifiEnabled;

- (id)_wifiNameWithState:(id)arg1;
- (id)_wifiPowerWithState:(id)arg1;
- (id)_wifiTetheringWithState:(id)arg1;
- (void)dealloc;
- (void)findKeysAirPortState:(id*)arg1 andTetheringState:(id*)arg2;
- (id)init;
- (id)wifiConfig;

@end

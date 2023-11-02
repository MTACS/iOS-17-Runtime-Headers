
@interface WFSaveSettingsOperation : WFOperation {
    bool  _currentNetwork;
    NSString * _interfaceName;
    NSOperationQueue * _keychainQueue;
    NSString * _name;
    struct __SCPreferences { } * _prefs;
    NSArray * _settings;
    NSString * _ssid;
}

@property (getter=isCurrentNetwork, nonatomic) bool currentNetwork;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, retain) NSOperationQueue *keychainQueue;
@property (nonatomic) struct __SCPreferences { }*prefs;
@property (nonatomic, retain) NSArray *settings;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (void)_applyProxySettings:(id)arg1 service:(struct __SCNetworkProtocol { }*)arg2;
- (struct __SCNetworkSet { }*)_createNewSetForNetworkNamed:(id)arg1 interfaceName:(id)arg2;
- (struct __SCNetworkSet { }*)_defaultSetRetained;
- (void)dealloc;
- (id)initWithSSID:(id)arg1 interfaceName:(id)arg2 settings:(id)arg3;
- (id)interfaceName;
- (bool)isCurrentNetwork;
- (id)keychainQueue;
- (id)name;
- (struct __SCPreferences { }*)prefs;
- (void)setCurrentNetwork:(bool)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setKeychainQueue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrefs:(struct __SCPreferences { }*)arg1;
- (void)setSettings:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)settings;
- (id)ssid;
- (void)start;

@end

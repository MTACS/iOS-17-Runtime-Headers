
@interface ICWiFiManager : NSObject <ICEnvironmentMonitorObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _wiFiAssociated;
    bool  _wiFiEnabled;
    struct __SCPreferences { } * _wifiPreferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isWiFiAssociated, nonatomic) bool wiFiAssociated;
@property (getter=isWiFiEnabled, nonatomic) bool wiFiEnabled;

+ (id)sharedWiFiManager;

- (void).cxx_destruct;
- (bool)_getWiFiAssociated;
- (bool)_getWiFiEnabledFromPrefs;
- (id)_processIdentifier;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (id)init;
- (bool)isWiFiAssociated;
- (bool)isWiFiEnabled;
- (void)setWiFiAssociated:(bool)arg1;
- (void)setWiFiEnabled:(bool)arg1;

@end


@interface NWSystemPathMonitor : NSObject {
    BKSApplicationStateMonitor * _applicationMonitor;
    bool  _ethernetPrimary;
    void * _fallbackWatcher;
    NSObject<OS_dispatch_source> * _mptcpWatcher;
    NSMutableDictionary * _perAppVPNEvaluators;
    NWPathEvaluator * _primaryEvaluator;
    NSObject<OS_dispatch_source> * _smoothingTimer;
    int  _symptomsNotifyToken;
    bool  _vpnActive;
    NWMonitor * _vpnMonitor;
    int  _vpnNotifyToken;
    bool  _wifiPrimary;
}

@property (retain) BKSApplicationStateMonitor *applicationMonitor;
@property (getter=isEthernetPrimary, nonatomic) bool ethernetPrimary;
@property void*fallbackWatcher;
@property (retain) NSObject<OS_dispatch_source> *mptcpWatcher;
@property (retain) NSMutableDictionary *perAppVPNEvaluators;
@property (retain) NWPathEvaluator *primaryEvaluator;
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer;
@property int symptomsNotifyToken;
@property (getter=isVPNActive, nonatomic) bool vpnActive;
@property (retain) NWMonitor *vpnMonitor;
@property int vpnNotifyToken;
@property (getter=isWiFiPrimary, nonatomic) bool wifiPrimary;

+ (id)sharedSystemPathMonitor;

- (void).cxx_destruct;
- (void)appStateChangedWithUserInfo:(id)arg1;
- (id)applicationMonitor;
- (void)dealloc;
- (void)eventFired;
- (void*)fallbackWatcher;
- (bool)getSymptomsFallback;
- (id)init;
- (bool)isEthernetPrimary;
- (bool)isVPNActive;
- (bool)isWiFiPrimary;
- (id)mptcpWatcher;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)perAppVPNEvaluators;
- (id)primaryEvaluator;
- (void)registerForSymptomsFallbackNotification;
- (void)registerForVPNNotifications;
- (void)setApplicationMonitor:(id)arg1;
- (void)setEthernetPrimary:(bool)arg1;
- (void)setFallbackWatcher:(void*)arg1;
- (void)setMptcpWatcher:(id)arg1;
- (void)setPerAppVPNEvaluators:(id)arg1;
- (void)setPrimaryEvaluator:(id)arg1;
- (void)setSmoothingTimer:(id)arg1;
- (void)setSymptomsNotifyToken:(int)arg1;
- (void)setVpnActive:(bool)arg1;
- (void)setVpnMonitor:(id)arg1;
- (void)setVpnNotifyToken:(int)arg1;
- (void)setWifiPrimary:(bool)arg1;
- (id)smoothingTimer;
- (void)startWatchingApplicationStates;
- (void)stopWatchingApplicationStates;
- (int)symptomsNotifyToken;
- (void)updateFlags;
- (void)updateVPNMonitor;
- (id)vpnMonitor;
- (int)vpnNotifyToken;

@end

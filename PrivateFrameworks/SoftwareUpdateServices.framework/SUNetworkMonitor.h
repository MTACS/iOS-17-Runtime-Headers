
@interface SUNetworkMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate> {
    CoreTelephonyClient * _ctClient;
    NSObject<OS_dispatch_queue> * _ctQueue;
    int  _currentCellularType;
    int  _currentNetworkType;
    NSHashTable * _observers;
    int  _overriddenCurrentCellularType;
    int  _overriddenCurrentNetworkType;
    bool  _overriddenExpensive;
    bool  _overriddenRoaming;
    NWPathEvaluator * _pathEvaluator;
    bool  _pathSatisfied;
    struct __SCNetworkReachability { } * _reachability;
    bool  _roaming;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(bool)arg1;
+ (id)sharedInstance;

- (void)_carrierBundleChanged;
- (void)_initNetworkObservation;
- (bool)_isCurrentlyRoaming;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromCurrentCellularDataRespectingWifiAssist:(bool)arg1;
- (int)_networkTypeFromCurrentCellularDataWithError:(id*)arg1;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_operatorBundleChanged;
- (bool)_overriddenByPreferences;
- (int)_queue_currentCellularType;
- (int)_queue_currentNetworkType;
- (void)_resetCtClient;
- (void)addObserver:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (int)currentCellularType;
- (int)currentNetworkType;
- (void)dealloc;
- (void)detectOverriddenNetwork;
- (void)displayStatusChanged:(id)arg1 status:(id)arg2;
- (id)init;
- (void)internetDataStatus:(id)arg1;
- (bool)isBootstrap;
- (bool)isCellularDataRoamingEnabled;
- (bool)isCellularRoaming;
- (bool)isCurrentNetworkTypeCellular;
- (bool)isCurrentNetworkTypeExpensive;
- (bool)isNetworkTypeCellular:(int)arg1;
- (bool)isPathSatisfied;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operatorBundleChange:(id)arg1;
- (void)refreshCellularType;
- (void)refreshNetworkAndCellularTypesWithFlags:(unsigned int)arg1;
- (void)refreshNetworkTypeWithFlags:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCellularRoaming:(bool)arg1;
- (void)setCurrentCellularType:(int)arg1;
- (void)setCurrentNetworkType:(int)arg1;
- (id)telephonyClient;
- (bool)usingWifi;

@end

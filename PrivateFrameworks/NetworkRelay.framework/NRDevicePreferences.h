
@interface NRDevicePreferences : NSObject {
    NSObject<OS_nw_path_evaluator> * _cmpnLnkPrefsEvaluator;
    NSObject<OS_xpc_object> * _connection;
    NRDeviceIdentifier * _deviceIdentifier;
    bool  _hasCmpnLnkPrefsForBT;
    bool  _hasCmpnLnkPrefsForIsoch;
    bool  _hasCmpnLnkPrefsForThroughput;
    bool  _hasCmpnLnkPrefsForThroughputP2P;
    bool  _hasCmpnLnkPrefsForThroughputP2PImmediate;
    unsigned long long  _identifier;
    NRBluetoothLinkPreferences * _internalBluetoothLinkPreferences;
    NRCompanionLinkPreferences * _internalCompanionLinkPreferences;
    bool  _internalDeviceSetupCompleted;
    bool  _internalDeviceSetupStarted;
    NSSet * _internalPolicyTrafficClassifiers;
    bool  _isNRDTestServer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _preferWiFiRequestCount;
    NRDevicePreferencesQuickRelay * _quickRelayPreference;
    unsigned long long  _quickRelayRequestCount;
}

@property (nonatomic, retain) NRBluetoothLinkPreferences *bluetoothLinkPreferences;
@property (nonatomic, retain) NRCompanionLinkPreferences *companionLinkPreferences;
@property (nonatomic, retain) NRDeviceIdentifier *deviceIdentifier;
@property (nonatomic, readonly) bool hasPreferWiFiRequest;
@property (nonatomic, readonly) bool hasQuickRelayRequest;
@property (nonatomic) bool isNRDTestServer;
@property (nonatomic, retain) NSSet *policyTrafficClassifiers;

- (void).cxx_destruct;
- (void)addPreferWiFiRequest;
- (void)addQuickRelayRequest;
- (id)bluetoothLinkPreferences;
- (void)cancel;
- (id)companionLinkPreferences;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (void)deviceSetupCompleted;
- (void)deviceSetupStarted;
- (bool)hasPreferWiFiRequest;
- (bool)hasQuickRelayRequest;
- (id)initWithDeviceIdentifier:(id)arg1;
- (bool)isNRDTestServer;
- (id)policyTrafficClassifiers;
- (void)removeAllQuickRelayRequests;
- (void)removePreferWiFiRequest;
- (void)removeQuickRelayRequest;
- (void)setBluetoothLinkPreferences:(id)arg1;
- (void)setCompanionLinkPreferences:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIsNRDTestServer:(bool)arg1;
- (void)setPolicyTrafficClassifiers:(id)arg1;

@end

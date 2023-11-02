
@interface WLWiFiController : NSObject {
    bool  _didConsultPreferencesForStartedNetwork;
    unsigned long long  _lastRequestID;
    WLNETRBClient * _netrbClient;
    NSObject<OS_dispatch_queue> * _requestQueue;
    WLWiFiNetwork * _startedNetwork;
    WLWiFiManager * _wifiManager;
}

@property (nonatomic, readonly) bool hasSoftAPCapability;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_disableSoftAPWithCompletion:(id /* block */)arg1;
- (void)_enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (void)_ensureStartedNetworkReflectsPreferences;
- (id)_initWithWiFiManager:(id)arg1 netrbClient:(id)arg2;
- (id)_networkRecordFromSSID:(id)arg1 password:(id)arg2 channel:(id)arg3;
- (unsigned long long)_newRequestID;
- (void)_startWiFiWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (id)_startedNetwork;
- (void)_stopWiFiWithCompletion:(id /* block */)arg1;
- (void)disableSoftAPWithCompletion:(id /* block */)arg1;
- (void)enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (bool)hasSoftAPCapability;
- (id)init;
- (bool)isIPAddressInRange:(id)arg1;

@end

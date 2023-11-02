
@interface SNNetworkWiFiManagerInternal : NSObject {
    void interface;
    void queue;
    void queueGroup;
    void wifiClientType;
    void wifiDevice;
    void wifiManager;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)arg1;
- (void)dealloc;
- (id)getWiFiRecordRepresentation;
- (id)init;
- (bool)isWiFiEnabled;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (bool)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)arg1;
- (void)releaseWiFiAssertion;

@end

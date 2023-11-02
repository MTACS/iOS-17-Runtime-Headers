
@interface SiriCoreWiFiManagerClient : NSObject {
    long long  _cca;
    struct __WiFiManagerClient { } * _primitiveWiFiManagerClient;
    long long  _rssi;
    long long  _snr;
    int  _type;
}

- (struct __WiFiManagerClient { }*)_primitiveWiFiManagerClient;
- (void)_setWiFiManagerClientType:(int)arg1;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)dealloc;
- (bool)hasAssociatedNetworkWithRSSI:(long long*)arg1 andSNR:(long long*)arg2 andCCA:(long long*)arg3 andPhyMode:(id*)arg4 andChannelInfo:(id*)arg5 isCaptive:(bool*)arg6;
- (bool)hasAssociatedNetworkWithRSSI:(long long*)arg1 andSNR:(long long*)arg2 andPhyMode:(id*)arg3 andChannelInfo:(id*)arg4 isCaptive:(bool*)arg5;
- (id)init;
- (bool)isWifiEnabled;
- (void)registerOneShotEnabledHandler:(id /* block */)arg1;
- (void)releaseWiFiAssertion;

@end

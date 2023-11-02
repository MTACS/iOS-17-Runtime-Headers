
@interface SNNetworkWiFiManager : NSObject {
    SNNetworkWiFiManagerInternal * _underlyingNetworkWiFiManager;
}

@property (nonatomic, retain) SNNetworkWiFiManagerInternal *underlyingNetworkWiFiManager;

- (void).cxx_destruct;
- (id)getWiFiRecord;
- (id)init;
- (bool)isWiFiEnabled;
- (void)setUnderlyingNetworkWiFiManager:(id)arg1;
- (id)underlyingNetworkWiFiManager;

@end

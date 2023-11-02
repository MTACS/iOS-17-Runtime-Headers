
@protocol BUNetworkMonitoring <NSObject>

@required

- (bool)hasCellularCapability;
- (bool)hasCellularConnection;
- (bool)hasWAPICapability;
- (bool)hasWifiConnection;
- (bool)isAirplaneModeEnabled;
- (bool)isConnected;
- (void)start;
- (void)stop;

@end


@protocol PPDiscoveryManagerDelegate <NSObject>

@required

- (void)didDiscoverDeviceWithAdvertisingID:(NSString *)arg1 signalStrength:(long long)arg2;

@end

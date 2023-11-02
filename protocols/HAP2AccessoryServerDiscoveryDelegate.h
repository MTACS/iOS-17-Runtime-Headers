
@protocol HAP2AccessoryServerDiscoveryDelegate <NSObject>

@required

- (void)discovery:(id <HAP2AccessoryServerDiscovery>)arg1 didDiscoverAccessory:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg2;

@optional

- (void)discovery:(id <HAP2AccessoryServerDiscovery>)arg1 didLoseAccessory:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg2 error:(NSError *)arg3;
- (void)discovery:(id <HAP2AccessoryServerDiscovery>)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)discovery:(id <HAP2AccessoryServerDiscovery>)arg1 didStopDiscoveringWithError:(NSError *)arg2;

@end

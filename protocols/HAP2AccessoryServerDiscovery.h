
@protocol HAP2AccessoryServerDiscovery <NSObject>

@required

- (<HAP2AccessoryServerDiscoveryDelegate> *)delegate;
- (bool)isDiscovering;
- (void)reconfirmAccessory:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg1;
- (void)setDelegate:(id <HAP2AccessoryServerDiscoveryDelegate>)arg1;
- (void)startDiscovering;
- (void)stopDiscovering;

@end

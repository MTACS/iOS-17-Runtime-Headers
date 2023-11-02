
@protocol HAP2AccessoryServer <HAP2AccessoryServerMetadata>

@required

- (unsigned long long)connectionState;
- (<HAP2AccessoryServerDelegate> *)delegate;
- (bool)hasDiscoveryAdvertisement;
- (NSString *)reachabilityChangedReason;
- (double)sessionCheckInterval;
- (void)setDelegate:(id <HAP2AccessoryServerDelegate>)arg1;

@end


@protocol HAP2AccessoryServerBrowser <NSObject>

@required

- (<HAP2AccessoryServerBrowserDelegate> *)delegate;
- (bool)isConfirming;
- (bool)isDiscovering;
- (NSArray *)pairedAccessoryServers;
- (void)setDelegate:(id <HAP2AccessoryServerBrowserDelegate>)arg1;
- (void)startConfirmingPairedAccessoryReachability;
- (void)startDiscovering;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)stopDiscovering;
- (NSArray *)unpairedAccessoryServers;

@end


@protocol RMSDiscoverySessionDelegate <NSObject>

@required

- (void)discoverySessionDidUpdateAvailableServices:(id <RMSDiscoverySession>)arg1;

@optional

- (void)discoverySessionNetworkAvailabilityDidChange:(id <RMSDiscoverySession>)arg1;

@end

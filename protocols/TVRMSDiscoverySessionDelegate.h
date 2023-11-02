
@protocol TVRMSDiscoverySessionDelegate <NSObject>

@required

- (void)discoverySessionDidUpdateAvailableServices:(id <TVRMSDiscoverySession>)arg1;

@optional

- (void)discoverySessionNetworkAvailabilityDidChange:(id <TVRMSDiscoverySession>)arg1;

@end

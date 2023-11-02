
@protocol TVRMSDiscoverySession <NSObject>

@required

- (NSArray *)availableServices;
- (void)beginDiscovery;
- (<TVRMSDiscoverySessionDelegate> *)delegate;
- (long long)discoveryTypes;
- (void)endDiscovery;
- (bool)isNetworkAvailable;
- (NSArray *)pairedNetworkNames;
- (void)setDelegate:(id <TVRMSDiscoverySessionDelegate>)arg1;
- (void)setDiscoveryTypes:(long long)arg1;
- (void)setPairedNetworkNames:(NSArray *)arg1;

@end

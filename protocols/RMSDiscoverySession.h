
@protocol RMSDiscoverySession <NSObject>

@required

- (NSArray *)availableServices;
- (void)beginDiscovery;
- (<RMSDiscoverySessionDelegate> *)delegate;
- (long long)discoveryTypes;
- (void)endDiscovery;
- (bool)isNetworkAvailable;
- (NSArray *)pairedNetworkNames;
- (void)setDelegate:(id <RMSDiscoverySessionDelegate>)arg1;
- (void)setDiscoveryTypes:(long long)arg1;
- (void)setPairedNetworkNames:(NSArray *)arg1;

@end

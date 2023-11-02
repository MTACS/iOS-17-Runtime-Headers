
@protocol RMSServiceProvider <NSObject>

@required

- (void)beginDiscovery;
- (<RMSServiceProviderDelegate> *)delegate;
- (void)endDiscovery;
- (void)setDelegate:(id <RMSServiceProviderDelegate>)arg1;

@end

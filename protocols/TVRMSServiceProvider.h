
@protocol TVRMSServiceProvider <NSObject>

@required

- (void)beginDiscovery;
- (<TVRMSServiceProviderDelegate> *)delegate;
- (void)endDiscovery;
- (void)setDelegate:(id <TVRMSServiceProviderDelegate>)arg1;

@end

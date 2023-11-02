
@protocol TVRMSServiceProviderDelegate <NSObject>

@required

- (void)serviceProvider:(id <TVRMSServiceProvider>)arg1 serviceDidBecomeAvailable:(TVRMSService *)arg2;
- (void)serviceProvider:(id <TVRMSServiceProvider>)arg1 serviceDidBecomeUnavailable:(TVRMSService *)arg2;

@end


@protocol RMSServiceProviderDelegate <NSObject>

@required

- (void)serviceProvider:(id <RMSServiceProvider>)arg1 serviceDidBecomeAvailable:(RMSService *)arg2;
- (void)serviceProvider:(id <RMSServiceProvider>)arg1 serviceDidBecomeUnavailable:(RMSService *)arg2;

@end

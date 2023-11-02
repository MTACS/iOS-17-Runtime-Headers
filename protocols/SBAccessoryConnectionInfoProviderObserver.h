
@protocol SBAccessoryConnectionInfoProviderObserver <NSObject>

@optional

- (void)accessoryConnectionInfoProvider:(SBAccessoryConnectionInfoProvider *)arg1 accessoryEndpointAttached:(NSString *)arg2 transportType:(int)arg3 protocol:(int)arg4 properties:(NSDictionary *)arg5 forConnection:(NSString *)arg6;
- (void)accessoryConnectionInfoProvider:(SBAccessoryConnectionInfoProvider *)arg1 accessoryEndpointDetached:(NSString *)arg2 forConnection:(NSString *)arg3;
- (void)accessoryConnectionInfoProvider:(SBAccessoryConnectionInfoProvider *)arg1 accessoryEndpointInfoPropertyChanged:(NSString *)arg2 properties:(NSDictionary *)arg3 forConnection:(NSString *)arg4;

@end

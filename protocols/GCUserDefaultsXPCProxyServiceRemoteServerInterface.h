
@protocol GCUserDefaultsXPCProxyServiceRemoteServerInterface

@required

- (void)observeUserDefaultsValueForKeyPath:(NSString *)arg1 change:(NSDictionary *)arg2;
- (void)userDefaultsCheckIn:(id <GCUserDefaultsXPCProxyServiceRemoteClientInterface>)arg1;

@end

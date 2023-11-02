
@protocol DNDSRemoteAppConfigurationServiceProviderDelegate <NSObject>

@required

- (LNAction *)remoteAppConfigurationServiceProvider:(DNDSRemoteAppConfigurationServiceProvider *)arg1 getCurrentAppConfigurationForActionIdentifier:(NSString *)arg2 bundleIdentifier:(NSString *)arg3 withError:(out id*)arg4;
- (bool)remoteAppConfigurationServiceProvider:(DNDSRemoteAppConfigurationServiceProvider *)arg1 invalidateAppContextForActionIdentifier:(NSString *)arg2 bundleIdentifier:(NSString *)arg3 withError:(out id*)arg4;

@end


@protocol DNDSRemoteServiceProviderAppInfoDelegate <NSObject>

@required

- (DNDAppInfo *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppInfoForBundleIdentifier:(NSString *)arg2 withError:(id*)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppInfoForBundleIdentifiers:(NSArray *)arg2 withError:(id*)arg3;

@end

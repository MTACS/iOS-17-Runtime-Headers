
@protocol TUCallProviderManagerXPCClient <NSObject>

@required

- (oneway void)updateProvidersByIdentifier:(NSDictionary *)arg1 localProvidersByIdentifier:(NSDictionary *)arg2 pairedHostDeviceProvidersByIdentifier:(NSDictionary *)arg3;

@end

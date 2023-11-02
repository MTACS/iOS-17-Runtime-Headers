
@protocol CMIOExtensionSessionProviderDelegate <NSObject>

@required

- (NSString *)copyProviderBundleID;
- (void)provider:(CMIOExtensionSessionProvider *)arg1 availableDevicesChanged:(NSArray *)arg2;
- (void)provider:(CMIOExtensionSessionProvider *)arg1 didFailWithError:(NSError *)arg2;
- (void)provider:(CMIOExtensionSessionProvider *)arg1 initializeDevices:(NSArray *)arg2 properties:(NSDictionary *)arg3;
- (void)provider:(CMIOExtensionSessionProvider *)arg1 propertiesChanged:(NSDictionary *)arg2;
- (void)providerHasBeenInvalidated:(CMIOExtensionSessionProvider *)arg1;

@end

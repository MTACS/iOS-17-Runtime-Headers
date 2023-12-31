
@protocol SKStoreExtensionServiceInterface <NSObject>

@required

- (void)openURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 annotation:(NSDictionary *)arg3;
- (void)setRequestedIdentifier:(NSString *)arg1;
- (void)setTabIdentifier:(NSString *)arg1;
- (void)setupWithParameters:(NSDictionary *)arg1;

@end

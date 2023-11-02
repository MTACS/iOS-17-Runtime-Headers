
@interface NETransparentProxyManager : NEVPNManager

@property (getter=isFromMDM, nonatomic, readonly) bool isFromMDM;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadEverythingFromPreferencesWithCompletionHandler:(id /* block */)arg1;

- (void)additionalSetup;
- (id)init;
- (bool)isFromMDM;
- (bool)isProtocolTypeValid:(long long)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;

@end

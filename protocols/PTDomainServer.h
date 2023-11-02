
@protocol PTDomainServer <NSObject>

@required

- (void)registerDomainWithInfo:(PTDomainInfo *)arg1;
- (void)registerRootSettingsProxyDefinition:(PTProxySettingsDefinition *)arg1 forDomainID:(NSString *)arg2;
- (void)registerTestRecipeWithInfo:(PTTestRecipeInfo *)arg1;

@end

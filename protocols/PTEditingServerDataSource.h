
@protocol PTEditingServerDataSource <NSObject>

@required

- (NSString *)activeTestRecipeID;
- (NSDictionary *)domainInfoByID;
- (NSDictionary *)rootSettingsArchiveForDomainID:(NSString *)arg1;
- (PTProxySettingsDefinition *)rootSettingsProxyDefinitionForDomainID:(NSString *)arg1;
- (NSDictionary *)testRecipeInfoByID;

@end

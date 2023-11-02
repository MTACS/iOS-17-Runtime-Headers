
@protocol PTEditingServerDelegate <NSObject>

@required

- (void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(NSString *)arg2 domainID:(NSString *)arg3;
- (void)invokeOutletAtKeyPath:(NSString *)arg1 domainID:(NSString *)arg2;
- (void)restoreDefaultValuesForDomainID:(NSString *)arg1;
- (void)sendEvent:(long long)arg1 forTestRecipeID:(NSString *)arg2;
- (void)setActiveTestRecipeID:(NSString *)arg1;

@end

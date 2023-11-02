
@protocol PTDomainClient <NSObject>

@required

- (void)invokeOutletAtKeyPath:(NSString *)arg1;
- (void)restoreDefaultSettings;
- (void)sendActiveTestRecipeEvent:(long long)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)updateSettingsFromArchive:(NSDictionary *)arg1;

@end

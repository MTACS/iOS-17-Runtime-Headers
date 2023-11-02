
@protocol PXSettingsConfigurationsMutableSource

@required

- (void)deleteAllConfigurations;
- (void)deleteConfigurationAtIndex:(long long)arg1;
- (void)insertConfiguration:(PXSettingsConfiguration *)arg1 atIndex:(long long)arg2;
- (void)insertConfigurations:(NSArray *)arg1 atIndex:(long long)arg2;
- (void)renameConfigurationAtIndex:(long long)arg1 withName:(NSString *)arg2;
- (void)updateConfigurationAtIndex:(long long)arg1;

@end


@protocol HMDCompositeSettingsModel

@required

+ (NSArray *)allKeyPaths;

- (NSDictionary *)keyPathsToSettingMetadata;
- (NSDictionary *)keyPathsToSettings;
- (NSDictionary *)keyPathsToSettingsForMigration;
- (void)setSetting:(HMDCompositeSetting *)arg1 forKeyPath:(NSString *)arg2 withError:(id*)arg3;

@end

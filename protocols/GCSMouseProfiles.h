
@protocol GCSMouseProfiles

@required

- (GCSMouseProfile *)mouseProfileForBundleIdentifier:(NSString *)arg1;
- (<GCSSettingsStoreService> *)settingsStore;
- (NSArray *)values;

@end


@protocol GCSSettingsStoreService <NSObject>

@required

- (<GCSControllers> *)controllers;
- (<GCSCopilotFusedControllers> *)copilotFusedControllers;
- (<GCSGames> *)games;
- (<GCSMouseProfiles> *)mouseProfiles;
- (GCSProfile *)profileForPersistentControllerIdentifier:(NSString *)arg1 appBundleIdentifier:(NSString *)arg2;
- (<GCSProfiles> *)profiles;
- (bool)savedDataMeetsRequiredVersion:(NSString *)arg1;
- (void)setShowGCPreferencesPane:(bool)arg1;
- (NSString *)settingsVersion;
- (bool)showGCPreferencesPane;

@end


@protocol HKMCSettingsManagerObserver <NSObject>

@optional

- (void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateAnalysisSettings:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateHiddenDisplayTypes:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateNotificationSettings:(HKMCSettingsManager *)arg1;

@end

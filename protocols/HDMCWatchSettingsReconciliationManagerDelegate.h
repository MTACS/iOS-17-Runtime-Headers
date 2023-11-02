
@protocol HDMCWatchSettingsReconciliationManagerDelegate

@required

- (void)watchSettingsReconciliationManager:(HDMCWatchSettingsReconciliationManager *)arg1 didReconcileValuesForKeys:(HDMCWatchSettingKeys *)arg2 didUpdateFeatureSetting:(bool)arg3 didUpdateUserDefault:(bool)arg4;

@end

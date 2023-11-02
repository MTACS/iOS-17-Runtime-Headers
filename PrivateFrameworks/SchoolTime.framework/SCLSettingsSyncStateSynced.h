
@interface SCLSettingsSyncStateSynced : SCLSettingsSyncState

- (void)didEnterWithPreviousState:(id)arg1;
- (void)settingsDidChange;
- (unsigned long long)status;

@end

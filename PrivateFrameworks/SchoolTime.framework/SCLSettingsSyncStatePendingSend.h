
@interface SCLSettingsSyncStatePendingSend : SCLSettingsSyncState

- (void)commitSettings;
- (void)didEnqueueMessage:(id)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (void)enqueueFailedWithError:(id)arg1;
- (void)settingsDidChange;
- (void)significantUserInteractionOccurred;
- (unsigned long long)status;
- (void)xpcActivityStarted;

@end

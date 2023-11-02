
@interface SCLSettingsSyncStateFailed : SCLSettingsSyncState

- (void)didEnterWithPreviousState:(id)arg1;
- (id)retryCriteriaWithInterval:(long long)arg1;
- (void)settingsDidChange;
- (void)significantUserInteractionOccurred;
- (unsigned long long)status;
- (void)transitionToPendingState;
- (void)xpcActivityStarted;

@end

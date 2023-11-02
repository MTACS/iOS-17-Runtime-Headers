
@interface SCLSettingsSyncStateSent : SCLSettingsSyncState

- (void)didEnterWithPreviousState:(id)arg1;
- (void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2;
- (void)messageWasDelivered:(id)arg1;
- (void)settingsDidChange;
- (unsigned long long)status;
- (void)xpcActivityStarted;

@end

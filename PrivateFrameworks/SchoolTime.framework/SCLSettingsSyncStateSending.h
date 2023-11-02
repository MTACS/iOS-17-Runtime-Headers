
@interface SCLSettingsSyncStateSending : SCLSettingsSyncState

- (void)message:(id)arg1 failedWithError:(id)arg2;
- (void)messageDidSend:(id)arg1;
- (void)settingsDidChange;
- (unsigned long long)status;

@end

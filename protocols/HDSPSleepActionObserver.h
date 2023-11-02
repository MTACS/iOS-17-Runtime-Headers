
@protocol HDSPSleepActionObserver <NSObject>

@optional

- (void)goodMorningWasDismissed;
- (void)sleepLockWasDismissed;
- (void)wakeNotificationWasConfirmed;
- (void)wakeUpAlarmWasDismissedFromSource:(unsigned long long)arg1;
- (void)wakeUpAlarmWasSnoozedFromSource:(unsigned long long)arg1;

@end

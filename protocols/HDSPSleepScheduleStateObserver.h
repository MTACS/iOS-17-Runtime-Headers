
@protocol HDSPSleepScheduleStateObserver <NSObject>

@required

- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;

@end

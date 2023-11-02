
@protocol HDSPSleepModeObserver <NSObject>

@required

- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;

@end

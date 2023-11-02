
@protocol SASLockStateMonitorDelegate <NSObject>

@optional

- (void)didChangeLockState:(unsigned long long)arg1;
- (void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2;

@end

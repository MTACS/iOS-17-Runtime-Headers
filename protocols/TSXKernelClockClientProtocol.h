
@protocol TSXKernelClockClientProtocol <NSObject>

@required

- (void)changedClockMaster;
- (void)resetClock;
- (void)updateLockState:(int)arg1;
- (void)updateTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;

@end

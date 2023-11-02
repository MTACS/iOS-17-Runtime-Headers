
@protocol BLSHWatchdogTiming <BLSHWatchdogInvalidatable>

@required

- (bool)hasSleepBeenImminentSinceScheduled;
- (unsigned long long)invalidationReason;
- (bool)isInvalidated;

@end


@protocol HMFTimerManagerDataSource <NSObject>

@required

- (double)currentTime;
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end

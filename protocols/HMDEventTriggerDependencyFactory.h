
@protocol HMDEventTriggerDependencyFactory

@required

- (HMFTimer *)createTimerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (HMDLaunchHandler *)launchHandler;

@end

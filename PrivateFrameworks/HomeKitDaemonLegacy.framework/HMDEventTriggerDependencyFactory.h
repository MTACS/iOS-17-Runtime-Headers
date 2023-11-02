
@interface HMDEventTriggerDependencyFactory : NSObject <HMDEventTriggerDependencyFactory>

@property (nonatomic, readonly) HMDLaunchHandler *launchHandler;

- (id)createTimerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)launchHandler;

@end

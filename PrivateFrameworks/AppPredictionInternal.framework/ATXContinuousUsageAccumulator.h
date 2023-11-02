
@interface ATXContinuousUsageAccumulator : NSObject {
    NSMutableArray * _appInFocusStartingEvents;
    BPSPublisher * _appLaunchPublisher;
    NSMutableArray * _continuousUsageAccumulator;
    NSArray * _continuousUseSessions;
}

@property (nonatomic, readonly, copy) NSArray *continuousUseSessions;

- (void).cxx_destruct;
- (id)continuousUseSessions;
- (id)eventWithBundleID:(id)arg1 launchReason:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 duration:(double)arg5;
- (id)init;
- (id)initWithAppLaunchPublisher:(id)arg1;
- (void)recordAppLaunchEndEvent:(id)arg1;
- (void)recordAppLaunchStartEvent:(id)arg1;
- (bool)successfullyAccumulatedContinuousUseEvents;

@end

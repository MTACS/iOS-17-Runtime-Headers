
@interface ATXModeActivityMetricsLogger : NSObject {
    NSArray * _combinedEvents;
    NSDate * _endDate;
    NSDate * _startDate;
    NSNumber * _startingDNDState;
}

- (void).cxx_destruct;
- (id)_coalesceAppLaunches:(id)arg1;
- (bool)_eventIsBeforeStartDate:(id)arg1;
- (id)_findStartingDNDStateFromTransitions:(id)arg1;
- (void)_populateCombinedEvents:(id)arg1;
- (bool)_shouldCoalesceLaunch:(id)arg1 nextLaunch:(id)arg2;
- (id)init;
- (id)initWithAppLaunches:(id)arg1 dndTransitions:(id)arg2 modeTransitions:(id)arg3 notificationEvents:(id)arg4 startDate:(id)arg5 endDate:(id)arg6;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)logMetrics;
- (void)logMetricsWithXPCActivity:(id)arg1;

@end

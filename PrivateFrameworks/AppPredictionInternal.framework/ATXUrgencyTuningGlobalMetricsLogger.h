
@interface ATXUrgencyTuningGlobalMetricsLogger : NSObject {
    ATXPETEventTracker2Logger * _eventTrackerLogger;
}

- (void).cxx_destruct;
- (id)init;
- (void)logCountForNotificationWithBundleId:(id)arg1 isTimeSensitiveNotification:(bool)arg2 isEngagedTimeSensitiveNotification:(bool)arg3 count:(double)arg4 xpcActivity:(id)arg5;
- (void)logUrgencyTuningGlobalMetrics;
- (void)logUrgencyTuningGlobalMetricsWithXPCActivity:(id)arg1;

@end


@interface ATXInterruptedAppSessionAccumulator : NSObject {
    NSMutableArray * _appSessions;
    ATXModeDimensionSet * _previousDimensions;
    _ATXAppLaunch * _previousLaunch;
    NSMutableDictionary * _recentNotifications;
    NSMutableDictionary * _summaryMetrics;
}

- (void).cxx_destruct;
- (bool)_doesLaunchInterruptPreviousLaunch:(id)arg1;
- (id)_getSummaryMetricForDimensions:(id)arg1;
- (id)countedSetContainingInterruptingAppBundleIds;
- (void)handleEndOfStream;
- (void)handleNextAppLaunch:(id)arg1 dimensionSet:(id)arg2;
- (void)handleNotificationEvent:(id)arg1;
- (id)init;
- (void)logToCoreAnalytics;
- (unsigned long long)numberOfInterruptingAppSessions;

@end

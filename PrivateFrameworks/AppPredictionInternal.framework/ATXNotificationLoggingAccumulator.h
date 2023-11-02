
@interface ATXNotificationLoggingAccumulator : NSObject {
    NSMutableDictionary * _summaryMetrics;
    NSMutableDictionary * _unhandledNotificationReceiveDimensionSets;
}

- (void).cxx_destruct;
- (id)_getSummaryMetricForDimensions:(id)arg1;
- (id)_popReceiveNotificationDimensionSetForNotificationId:(id)arg1;
- (void)handleNextNotification:(id)arg1 currentDimensionSet:(id)arg2;
- (id)init;
- (void)logToCoreAnalytics;

@end

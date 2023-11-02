
@interface ATXDeviceUsageAccumulator : NSObject {
    ATXModeDimensionSet * _lastDimensionSet;
    NSMutableDictionary * _summaryMetrics;
}

- (void).cxx_destruct;
- (id)_getSummaryMetricForDimensions:(id)arg1;
- (void)handleEndOfStream:(id)arg1;
- (void)handleModeDimensionSetChange:(id)arg1 changeTime:(id)arg2;
- (void)handleNextOnInterval:(id)arg1 dimensionSet:(id)arg2;
- (id)init;
- (void)logToCoreAnalytics;

@end

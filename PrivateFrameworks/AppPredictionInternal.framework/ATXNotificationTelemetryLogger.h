
@interface ATXNotificationTelemetryLogger : NSObject {
    ATXNotificationAndSuggestionDatastore * _datastore;
    ATXDNDModeConfigurationClient * _modeConfigClient;
    NSMutableDictionary * _summaryMetrics;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDatastore:(id)arg1 modeConfigClient:(id)arg2;
- (void)logNotificationMetricsFromStartTimestamp:(id)arg1 toEndTimestamp:(id)arg2;
- (void)logNotificationMetricsWithXPCActivity:(id)arg1;
- (id)summaryMetricsForActivityType:(unsigned long long)arg1;

@end

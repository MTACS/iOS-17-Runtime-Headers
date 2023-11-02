
@interface ATXNotificationAdjacentSuggestionMetricsLogger : NSObject {
    ATXNotificationAndSuggestionDatastore * _datastore;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDatastore:(id)arg1;
- (void)logNotificationAdjacentSuggestionMetrics;
- (void)logNotificationAdjacentSuggestionMetricsWithXPCActivity:(id)arg1;

@end

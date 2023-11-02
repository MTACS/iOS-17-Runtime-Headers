
@interface BRKMetricsLogger : NSObject

+ (id)sharedInstance;

- (id)_coreAnalyticsKeyForMetricKey:(id)arg1;
- (id)_init;
- (void)logEventName:(id)arg1 eventPayLoad:(id)arg2;

@end

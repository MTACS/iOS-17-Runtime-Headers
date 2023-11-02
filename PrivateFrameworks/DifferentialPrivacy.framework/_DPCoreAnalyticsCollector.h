
@interface _DPCoreAnalyticsCollector : NSObject <_DPMetricsCollector>

+ (id)sharedInstance;

- (void)reportMetricsForEvent:(id)arg1 withMetrics:(id)arg2;

@end


@protocol HDMetricsCollector

@required

- (void)addObserver:(id <HDMetricsCollectorObserver>)arg1;
- (void)removeObserver:(id <HDMetricsCollectorObserver>)arg1;

@end

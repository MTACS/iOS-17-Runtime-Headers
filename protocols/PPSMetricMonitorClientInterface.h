
@protocol PPSMetricMonitorClientInterface

@required

- (void)endWithError:(NSError *)arg1;
- (void)updateWithMetrics:(NSDictionary *)arg1;

@end

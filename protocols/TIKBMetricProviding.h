
@protocol TIKBMetricProviding <TIMetricProviding>

@required

- (NSObject *)valueForMetricWithName:(NSString *)arg1 withContext:(TIAnalyticsMetricsContext *)arg2;
- (NSArray *)valuesByBucketedWordLengthForMetricWithName:(NSString *)arg1 withContext:(TIAnalyticsMetricsContext *)arg2;

@end

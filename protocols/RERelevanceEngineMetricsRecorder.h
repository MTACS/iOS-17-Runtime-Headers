
@protocol RERelevanceEngineMetricsRecorder <NSObject>

@optional

- (bool)ignoreValidMetricCheck;
- (void)recordCallibrationCurveMetrics:(NSDictionary *)arg1 forInteraction:(NSString *)arg2;
- (void)recordPredictionMetrics:(NSDictionary *)arg1 forInteraction:(NSString *)arg2;
- (void)recordTrainingMetrics:(NSDictionary *)arg1 forInteraction:(NSString *)arg2;

@end

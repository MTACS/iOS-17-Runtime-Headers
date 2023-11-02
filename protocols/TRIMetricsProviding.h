
@protocol TRIMetricsProviding

@required

- (NSArray *)dimensions;
- (NSArray *)metrics;
- (TRITrialSystemTelemetry *)trialSystemTelemetry;

@end

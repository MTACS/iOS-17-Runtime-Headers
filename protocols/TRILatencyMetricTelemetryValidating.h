
@protocol TRILatencyMetricTelemetryValidating

@required

- (TRITrialRolloutFields *)validateAndReturnTelemetryForDeployment:(TRIRolloutDeployment *)arg1 factorPackSetId:(NSString<TRIFactorPackSetId> *)arg2;

@end

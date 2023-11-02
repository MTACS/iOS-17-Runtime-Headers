
@protocol BCSRealTimeTimingMeasurementHandler <NSObject>

@required

- (void)timingMeasurementDidBegin:(BCSTimingMeasurement *)arg1;
- (void)timingMeasurementDidEnd:(BCSTimingMeasurement *)arg1;

@end

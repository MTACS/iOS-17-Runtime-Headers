
@protocol BCSRealTimeFlagMeasurementHandler <NSObject>

@required

- (void)flagMeasurementDidChange:(bool)arg1 forMeasurement:(BCSFlagMeasurement *)arg2;

@end

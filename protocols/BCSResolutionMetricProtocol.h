
@protocol BCSResolutionMetricProtocol <NSObject>

@required

- (BCSFlagMeasurement *)cacheHitMeasurement;
- (long long)errorCode;
- (void)setCacheHitMeasurement:(BCSFlagMeasurement *)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setTimingMeasurement:(BCSTimingMeasurement *)arg1;
- (BCSTimingMeasurement *)timingMeasurement;

@end

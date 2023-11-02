
@protocol BCSItemFetchMetricProtocol <NSObject>

@required

- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void)setTimingMeasurement:(BCSTimingMeasurement *)arg1;
- (BCSTimingMeasurement *)timingMeasurement;

@end

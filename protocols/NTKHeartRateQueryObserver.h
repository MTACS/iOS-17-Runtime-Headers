
@protocol NTKHeartRateQueryObserver

@required

- (void)manager:(NTKHeartRateQueryManager *)arg1 receivedLatestHeartRateSample:(HKQuantitySample *)arg2;

@optional

- (void)manager:(NTKHeartRateQueryManager *)arg1 receivedLatestHeartRateSummary:(HKHeartRateSummary *)arg2;

@end

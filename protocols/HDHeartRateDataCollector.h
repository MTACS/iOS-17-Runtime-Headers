
@protocol HDHeartRateDataCollector <HDDataCollector>

@optional

- (void)dataCollector:(id <HDDataCollector>)arg1 didCollectHeartRate:(HDHeartRateSensorDatum *)arg2 device:(HKDevice *)arg3 source:(HKSource *)arg4;

@end


@protocol HMDHomeMetricsDispatcherFactory <NSObject>

@required

- (HMDHomeMetricsDispatcher *)createHomeMetricsDispatcherWithIdentifier:(NSUUID *)arg1 logEventSubmitter:(id <HMMLogEventSubmitting>)arg2;

@end

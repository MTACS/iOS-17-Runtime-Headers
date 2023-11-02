
@protocol HMDAppleMediaAccessoriesStateManagerMetricsDispatcherFactory <NSObject>

@required

- (HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *)createAppleMediaAccessoriesStateManagerMetricsDispatcherWithIdentifier:(NSUUID *)arg1 logEventSubmitter:(id <HMMLogEventSubmitting>)arg2;

@end

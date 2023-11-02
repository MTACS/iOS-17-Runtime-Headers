
@protocol HMDSiriEndpointProfileMetricsDispatcherFactory <NSObject>

@required

- (HMDSiriEndpointProfileMetricsDispatcher *)createSiriEndpointProfileMetricsDispatcherWithAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 logEventSubmitter:(id <HMMLogEventSubmitting>)arg3;

@end

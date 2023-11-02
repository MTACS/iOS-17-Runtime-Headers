
@protocol HMDPrimaryResidentMessageRouterMetricsDispatcherFactory <NSObject>

@required

- (HMDPrimaryResidentMessageRouterMetricsDispatcher *)createPrimaryResidentMessageRouterMetricsDispatcherWithLogEventSubmitter:(id <HMMLogEventSubmitting>)arg1;

@end

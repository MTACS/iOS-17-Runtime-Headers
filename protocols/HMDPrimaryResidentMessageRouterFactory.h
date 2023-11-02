
@protocol HMDPrimaryResidentMessageRouterFactory <NSObject>

@required

- (HMDPrimaryResidentMessageRouter *)createPrimaryResidentMessageRouterWithHomeUUID:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 metricsDispatcher:(HMDPrimaryResidentMessageRouterMetricsDispatcher *)arg3;

@end

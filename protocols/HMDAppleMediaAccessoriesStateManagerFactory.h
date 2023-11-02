
@protocol HMDAppleMediaAccessoriesStateManagerFactory <NSObject>

@required

- (HMDAppleMediaAccessoriesStateManager *)createAppleMediaAccessoriesStateManagerWithIdentifier:(NSUUID *)arg1 messenger:(HMDAppleMediaAccessoriesStateMessenger *)arg2 metricsDispatcher:(HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *)arg3;

@end

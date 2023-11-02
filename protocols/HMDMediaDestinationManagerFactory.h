
@protocol HMDMediaDestinationManagerFactory <NSObject>

@required

- (HMDMediaDestinationManager *)mediaDestinationManagerWithDestination:(HMMediaDestination *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 notificationCenter:(NSNotificationCenter *)arg3 backingStore:(HMDBackingStore *)arg4 targetDevice:(bool)arg5 dataSource:(id <HMDMediaDestinationManagerDataSource>)arg6 delegate:(id <HMDMediaDestinationManagerDelegate>)arg7;

@end

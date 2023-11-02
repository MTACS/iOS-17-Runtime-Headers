
@protocol HMDMediaDestinationControllerFactory <NSObject>

@required

- (HMDMediaDestinationController *)mediaDestinationControllerWithData:(HMMediaDestinationControllerData *)arg1 backingStore:(HMDBackingStore *)arg2 messageDispatcher:(HMFMessageDispatcher *)arg3 notificationCenter:(NSNotificationCenter *)arg4 logEventSubmitter:(id <HMMLogEventSubmitting>)arg5 dailyScheduler:(HMDLogEventDailyScheduler *)arg6 targetDevice:(bool)arg7 dataSource:(id <HMDMediaDestinationControllerDataSource>)arg8 delegate:(id <HMDMediaDestinationControllerDelegate>)arg9;

@end

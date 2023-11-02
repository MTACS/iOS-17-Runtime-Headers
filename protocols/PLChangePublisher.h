
@protocol PLChangePublisher <NSObject>

@required

- (void)pauseLaunchEventNotifications;
- (PLClientServerTransaction *)publishChangeEvent:(NSObject<OS_xpc_object> *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 transaction:(PLClientServerTransaction *)arg3;
- (void)unpauseLaunchEventNotifications;

@end


@protocol REMSaveRequestNotifyChangeDelegate

@required

- (OS_dispatch_queue *)callbackQueue;
- (void)notifyEventFromSaveRequest:(NSSet *)arg1;

@end

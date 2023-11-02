
@protocol HMDRemoteDeviceMonitorFactory <NSObject>

@required

- (HMDRemoteDeviceConfirmationHandler *)newConfirmationHandlerWithTimeout:(void *)arg1 workQueue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (HMFTimer *)newDeviceMonitoringTimer;
- (HMFTimer *)newInitialDeviceHealthTimer;
- (HMFTimer *)newRepeatingDeviceHealthTimer;
- (HMFOperation *)newSendMessageOperationWithMessage:(HMFMessage *)arg1;

@end

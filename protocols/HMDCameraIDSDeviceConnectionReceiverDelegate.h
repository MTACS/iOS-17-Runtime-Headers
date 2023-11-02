
@protocol HMDCameraIDSDeviceConnectionReceiverDelegate <NSObject>

@required

- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didEndSessionWithError:(NSError *)arg2;
- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didSetUpWithError:(NSError *)arg2;

@end

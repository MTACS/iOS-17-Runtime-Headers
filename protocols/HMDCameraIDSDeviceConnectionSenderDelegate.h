
@protocol HMDCameraIDSDeviceConnectionSenderDelegate <NSObject>

@required

- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didEndSessionWithError:(NSError *)arg2;
- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didSetUpWithError:(NSError *)arg2;

@end

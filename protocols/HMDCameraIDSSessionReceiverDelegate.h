
@protocol HMDCameraIDSSessionReceiverDelegate <NSObject>

@required

- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didEndSessionWithError:(NSError *)arg2;
- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didSetUpWithError:(NSError *)arg2;

@end

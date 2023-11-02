
@protocol HMDCameraIDSSessionInitiatorDelegate <NSObject>

@required

- (void)sessionInitiator:(HMDCameraIDSSessionInitiator *)arg1 didEndSessionWithError:(NSError *)arg2;
- (void)sessionInitiator:(HMDCameraIDSSessionInitiator *)arg1 didSetUpWithError:(NSError *)arg2;

@end

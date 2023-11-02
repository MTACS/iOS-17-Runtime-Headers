
@protocol CAMBurstDelegate <NSObject>

@optional

- (void)captureControllerDidReachMaximumBurstLength:(CUCaptureController *)arg1;
- (void)captureControllerDidStopCapturingBurst:(CUCaptureController *)arg1;
- (void)captureControllerDidStopPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerWillStartCapturingBurst:(CUCaptureController *)arg1;
- (void)captureControllerWillStartPlayingBurstEndSound:(CUCaptureController *)arg1;

@end


@protocol CAMCaptureRunningDelegate <NSObject>

@optional

- (void)captureControllerDidStartRunning:(CUCaptureController *)arg1;
- (void)captureControllerDidStopRunning:(CUCaptureController *)arg1;

@end

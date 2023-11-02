
@protocol CAMCaptureInterruptionDelegate <NSObject>

@optional

- (void)captureControllerInterruptionEnded:(CUCaptureController *)arg1;
- (void)captureControllerWasInterrupted:(CUCaptureController *)arg1;

@end

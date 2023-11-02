
@protocol CAMConfigurationDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didChangeToGraphConfiguration:(CAMCaptureGraphConfiguration *)arg2 forDesiredConfiguration:(CAMCaptureGraphConfiguration *)arg3 requestID:(int)arg4;

@end


@protocol CAMCaptureResultDelegate <NSObject>

@optional

- (void)captureController:(CUCaptureController *)arg1 didGenerateStillImageCaptureResult:(CAMStillImageCaptureResult *)arg2 fromRequest:(CAMCaptureRequest *)arg3;
- (void)captureController:(CUCaptureController *)arg1 didGenerateVideoCaptureResult:(CAMVideoCaptureResult *)arg2 fromRequest:(CAMCaptureRequest *)arg3;

@end

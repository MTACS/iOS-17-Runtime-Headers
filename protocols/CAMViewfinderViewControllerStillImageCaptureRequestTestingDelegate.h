
@protocol CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate <NSObject>

@required

- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveStillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg2 error:(NSError *)arg3;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveStillImageRequestDidCompleteStillImageCapture:(CAMStillImageCaptureRequest *)arg2 withResponse:(CAMStillImageCaptureResponse *)arg3 error:(NSError *)arg4;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveStillImageRequestDidStopCapturingStillImage:(CAMStillImageCaptureRequest *)arg2;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didUpdateImageWellWithRequest:(CAMCaptureRequest *)arg2 response:(CAMStillImageCaptureResponse *)arg3 error:(NSError *)arg4;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 willCaptureStillImageForRequest:(CAMStillImageCaptureRequest *)arg2;

@end

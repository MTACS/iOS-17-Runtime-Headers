
@protocol BKUIPearlVideoCaptureSessionType <NSObject>

@required

- (double)additionalPreviewScalingAllowedByCameraFormat;
- (<BKUIVideoCaptureSesssionDelegate> *)delegate;
- (void)endCapture;
- (AVCaptureVideoPreviewLayer *)previewLayer;
- (void)setDelegate:(id <BKUIVideoCaptureSesssionDelegate>)arg1;
- (void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1;
- (void)startCapture;

@end


@interface HPSSpatialProfileVideoCaptureSession : NSObject <BKUIPearlVideoCaptureSessionType> {
    NSObject<OS_dispatch_queue> * _captureQueue;
    AVCaptureSession * _captureSession;
    <BKUIVideoCaptureSesssionDelegate> * _delegate;
    AVCaptureDeviceInput * _deviceInput;
    AVCaptureVideoPreviewLayer * _previewLayer;
}

@property (nonatomic, readonly) double additionalPreviewScalingAllowedByCameraFormat;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKUIVideoCaptureSesssionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_frontCamera;
- (double)additionalPreviewScalingAllowedByCameraFormat;
- (id)delegate;
- (void)endCapture;
- (id)init;
- (id)previewLayer;
- (void)setDelegate:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)startCapture;

@end

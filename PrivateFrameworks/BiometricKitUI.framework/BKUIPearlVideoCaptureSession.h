
@interface BKUIPearlVideoCaptureSession : NSObject <BKUIPearlVideoCaptureSessionType> {
    double  _additionalPreviewScalingAllowedByCameraFormat;
    NSObject<OS_dispatch_queue> * _captureQueue;
    AVCaptureSession * _captureSession;
    bool  _captureSessionInterrupted;
    unsigned long long  _captureSessionRestarts;
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
- (void)_captureSessionInterrupted:(id)arg1;
- (void)_captureSessionStarted:(id)arg1;
- (void)_captureSessionStopped:(id)arg1;
- (id)_frontCamera;
- (void)_setupCaptureStack;
- (void)_stopSessionAndTearDown;
- (bool)_synchronizedCaptureSessionInterrupted;
- (double)additionalPreviewScalingAllowedByCameraFormat;
- (void)dealloc;
- (id)delegate;
- (void)endCapture;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)previewLayer;
- (void)setDelegate:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)startCapture;

@end

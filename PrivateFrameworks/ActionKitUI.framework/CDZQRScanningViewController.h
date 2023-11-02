
@interface CDZQRScanningViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession * _avSession;
    UILabel * _cameraUnavailableLabel;
    id /* block */  _cancelBlock;
    AVCaptureDevice * _captureDevice;
    id /* block */  _errorBlock;
    NSString * _lastCapturedString;
    NSArray * _metadataObjectTypes;
    AVCaptureVideoPreviewLayer * _previewLayer;
    id /* block */  _resultBlock;
    UIButton * _torchButton;
}

@property (nonatomic, retain) AVCaptureSession *avSession;
@property (nonatomic) UILabel *cameraUnavailableLabel;
@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, retain) AVCaptureDevice *captureDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastCapturedString;
@property (nonatomic, retain) NSArray *metadataObjectTypes;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic, copy) id /* block */ resultBlock;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *torchButton;

- (void).cxx_destruct;
- (id)avSession;
- (id)cameraUnavailableLabel;
- (id /* block */)cancelBlock;
- (void)cancelItemSelected:(id)arg1;
- (id)captureDevice;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id /* block */)errorBlock;
- (void)handleFocusTap:(id)arg1;
- (id)init;
- (id)initWithMetadataObjectTypes:(id)arg1;
- (id)lastCapturedString;
- (id)metadataObjectTypes;
- (id)previewLayer;
- (id /* block */)resultBlock;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setAvSession:(id)arg1;
- (void)setCameraUnavailableLabel:(id)arg1;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setCaptureDevice:(id)arg1;
- (void)setErrorBlock:(id /* block */)arg1;
- (void)setLastCapturedString:(id)arg1;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setTorchButton:(id)arg1;
- (void)toggleTorch:(id)arg1;
- (id)torchButton;
- (void)turnTorchOff;
- (void)turnTorchOn;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

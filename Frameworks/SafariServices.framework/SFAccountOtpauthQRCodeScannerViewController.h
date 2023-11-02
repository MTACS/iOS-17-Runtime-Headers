
@interface SFAccountOtpauthQRCodeScannerViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession * _captureSession;
    <SFAccountOtpauthQRCodeScannerViewControllerDelegate> * _delegate;
    AVCaptureVideoPreviewLayer * _previewLayer;
    UIView * _viewfinderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAccountOtpauthQRCodeScannerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCaptureSession;
- (void)_dismiss:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface PKPaymentDocumentSubmissionIDCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol> {
    UIBarButtonItem * _buttonCancel;
    UIView * _cameraInstructionContainerView;
    PKCameraCaptureInstructionView * _cameraInstructionView;
    UIView * _cameraView;
    PKPaymentDocumentSubmissionController * _captureController;
    long long  _context;
    unsigned long long  _featureIdentifier;
    bool  _reachedTimeout;
    NSTimer * _timerTryAgain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cancel;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)captureController:(id)arg1 showLoading:(bool)arg2;
- (void)dealloc;
- (id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3;
- (void)loadView;
- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (void)updateUIWithState:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

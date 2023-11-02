
@interface _PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKLoadingUIProviding> {
    unsigned long long  _cameraCaptureStartTime;
    UIView * _cameraView;
    long long  _context;
    PKPaymentSetupDockView * _dockView;
    <PKPaymentCameraCaptureViewControllerDelegate> * _flowItemDelegate;
    PKTableHeaderView * _headerView;
    bool  _hideSetupLaterButton;
    NSArray * _outputObjects;
    PKPaymentProvisioningController * _provisioningController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentCameraCaptureViewControllerDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSetupLaterButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_manualEntryButtonPressed:(id)arg1;
- (void)_setupLater:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id)flowItemDelegate;
- (bool)hideSetupLaterButton;
- (id)init;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;
- (void)loadView;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

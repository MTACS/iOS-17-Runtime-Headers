
@interface CoreIDVUI.IDScanViewController : CoreIDVUI.IdentityProofingViewController {
    void analyticsReporter;
    void autoCapturePath;
    void cameraReader;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  docInfo;
    void docScanConfig;
    void eligibilityHelper;
    void frameCount;
    void frameRate;
    void idScanResult;
    void interactor;
    void lastSpokenAlertMessage;
    void proofingFlowManager;
    void scanSide;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

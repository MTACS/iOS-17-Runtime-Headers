
@interface CoreIDVUI.IDScanConfirmationViewController : CoreIDVUI.IdentityProofingViewController {
    void analyticsReporter;
    void configuration;
    void docScanConfig;
    void eligibilityHelper;
    void idScanResult;
    void interactor;
    void proofingFlowManager;
    void scanSide;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end

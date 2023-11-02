
@interface PKPeerPaymentGraduationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {
    bool  _allowsManualEntry;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentWebService * _peerPaymentWebService;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentGenericError;
- (void)_presentIdentityVerificationFlowWithGraduationPrerequisiteIdentifier:(bool)arg1;
- (void)_presentTermsWithTermsResponse:(id)arg1;
- (void)_showSpinner:(bool)arg1;
- (bool)allowsManualEntry;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithPeerPaymentWebService:(id)arg1 peerPaymentAccount:(id)arg2 passLibraryDataProvider:(id)arg3 setupDelegate:(id)arg4 context:(long long)arg5;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)viewDidLoad;

@end

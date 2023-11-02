
@interface PDUWelcomeViewController_iOS : OBWelcomeController <PDUDisclosureReviewViewControllerDelegate> {
    <PDCApplicationIdentity> * _applicationIdentity;
    <PDCApplicationRecord> * _applicationRecord;
    <PDCConsentStore> * _consentStore;
    <PDUWelcomeViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PDUWelcomeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_requestIconForApplication:(id)arg1;
- (void)cancelPressed;
- (void)continuePressed;
- (id)delegate;
- (void)disclosureReviewViewControllerDidDismiss:(id)arg1;
- (id)initWithApplicationIdentity:(id)arg1 consentStore:(id)arg2;
- (void)learnMorePressed;
- (long long)preferredUserInterfaceStyle;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

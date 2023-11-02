
@interface PKIssuerBindingViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {
    NSString * _accountName;
    <PKIssuerBindingViewControllerDelegate> * _delegate;
    NSData * _issuerData;
    NSString * _issuerName;
    PKPassLibrary * _passLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKIssuerBindingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertViewControllerForError:(id)arg1;
- (void)_cancel;
- (void)_confirmSecurityCapabilitiesWithCompletion:(id /* block */)arg1;
- (void)_enableControls;
- (void)_presentFailureWithError:(id)arg1;
- (id)delegate;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithIssuerData:(id)arg1 signature:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

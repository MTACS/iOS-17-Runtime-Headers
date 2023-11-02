
@interface PKPeerPaymentActionController : NSObject <PKAddBankAccountInformationViewControllerDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentControllerDelegate> {
    PKPeerPaymentAccount * _account;
    PKPaymentPass * _alternateFundingSource;
    PKBankAccountInformation * _bankInformation;
    long long  _context;
    unsigned long long  _controllerAction;
    <PKPeerPaymentActionControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PKPeerPaymentController * _peerPaymentController;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _performingAction;
    NSString * _recurringPaymentIdentifier;
    PKPeerPaymentTermsController * _termsController;
    PKCurrencyAmount * _thresholdAmount;
}

@property (nonatomic, retain) PKPaymentPass *alternateFundingSource;
@property (nonatomic, readonly) PKBankAccountInformation *bankInformation;
@property (nonatomic) unsigned long long controllerAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKPeerPaymentActionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *recurringPaymentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKCurrencyAmount *thresholdAmount;

+ (id)alertControllerForPeerPaymentActionUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(id /* block */)arg3;
+ (bool)canPerformPeerPaymentAction:(unsigned long long)arg1 account:(id)arg2 unableReason:(unsigned long long*)arg3 displayableError:(id*)arg4;
+ (id)displayableErrorForPeerPaymentAction:(unsigned long long)arg1 andReason:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_handleError:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_peerPaymentActionHasCompletedWithState:(unsigned long long)arg1;
- (unsigned long long)_peerPaymentControllerModeForAction;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentTermsAndConditionsWithError:(id)arg1;
- (void)_updateAccountWithCompletion:(id /* block */)arg1;
- (id)alternateFundingSource;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)bankInformation;
- (unsigned long long)controllerAction;
- (id)delegate;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 passLibraryDataProvider:(id)arg4 delegate:(id)arg5;
- (void)performActionWithCurrencyAmount:(id)arg1;
- (void)presentAddBankAccountViewController;
- (void)presentAddDebitCardViewController;
- (id)presentationSceneBundleIdentifierForPeerPaymentController:(id)arg1;
- (id)presentationSceneIdentifierForPeerPaymentController:(id)arg1;
- (id)recurringPaymentIdentifier;
- (void)setAlternateFundingSource:(id)arg1;
- (void)setControllerAction:(unsigned long long)arg1;
- (void)setRecurringPaymentIdentifier:(id)arg1;
- (void)setThresholdAmount:(id)arg1;
- (id)thresholdAmount;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end

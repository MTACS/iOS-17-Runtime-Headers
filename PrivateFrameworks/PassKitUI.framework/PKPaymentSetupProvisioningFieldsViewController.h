
@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupHideSetupLaterButtonProtocol, RemoteUIControllerDelegate, UITextFieldDelegate> {
    CLInUseAssertion * _CLInUse;
    UINotificationFeedbackGenerator * _cardAddedFeedbackGenerator;
    PKPaymentSetupFooterView * _cardDetailsFooterView;
    id /* block */  _continueActionHandler;
    <PKPaymentProvisioningViewControllerDelegate> * _flowItemDelegate;
    bool  _hideSetupLaterButton;
    bool  _ignoreProgressDescriptionUpdates;
    PKPaymentProvisioningController * _paymentProvisioningController;
    bool  _provisioningHomeKey;
    RemoteUIController * _termsUIController;
}

@property (nonatomic, copy) id /* block */ continueActionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentProvisioningViewControllerDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSetupLaterButton;
@property (nonatomic) bool ignoreProgressDescriptionUpdates;
@property (nonatomic, retain) PKPaymentProvisioningController *paymentProvisioningController;
@property (getter=isProvisioningHomeKey, nonatomic, readonly) bool provisioningHomeKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cardDetailsFooterView;
- (void)addDifferentCard:(id)arg1;
- (id /* block */)continueActionHandler;
- (void)dealloc;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)displayTermsForTermsURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)flowItemDelegate;
- (id)footerView;
- (bool)hideSetupLaterButton;
- (bool)ignoreProgressDescriptionUpdates;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (bool)isProvisioningHomeKey;
- (id)paymentProvisioningController;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)resetRightBarButtonState;
- (void)setContinueActionHandler:(id /* block */)arg1;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)setIgnoreProgressDescriptionUpdates:(bool)arg1;
- (void)setNotificationTextInFooterView:(id)arg1;
- (void)setPaymentProvisioningController:(id)arg1;
- (void)setupLater:(id)arg1;
- (void)showVerifiedUIForPass:(id)arg1;
- (void)suppressFooterViewManualEntryButton;
- (void)suppressFooterViewSetupLaterButton;
- (void)suppressFooterViewSkipCardButton;
- (void)updateLocationAuthorization;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

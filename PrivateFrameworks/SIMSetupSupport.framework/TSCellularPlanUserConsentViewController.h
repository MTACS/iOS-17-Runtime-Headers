
@interface TSCellularPlanUserConsentViewController : TSOBWelcomeController <SSSpinnerProtocol, TSSetupFlowItem> {
    SSOBBoldTrayButton * _acceptButton;
    bool  _animating;
    NSArray * _cachedButtons;
    NSString * _confirmationCode;
    unsigned long long  _consentType;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _didReceiveResponse;
    bool  _requireAdditionalConsent;
    SSSpinner * _spinner;
    UIView * _spinnerContainer;
}

@property (retain) SSOBBoldTrayButton *acceptButton;
@property bool animating;
@property (retain) NSArray *cachedButtons;
@property (nonatomic, readonly) unsigned long long consentType;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SSSpinner *spinner;
@property (retain) UIView *spinnerContainer;
@property (readonly) Class superclass;

+ (void)calculateTitleAndDetailsWithName:(id)arg1 consentType:(unsigned long long)arg2 title:(id*)arg3 details:(id*)arg4;

- (void).cxx_destruct;
- (void)_acceptButtonTapped;
- (void)_cancelButtonTapped;
- (void)_declineButtonTapped;
- (void)_setNavigationItems;
- (id)acceptButton;
- (bool)animating;
- (id)cachedButtons;
- (bool)canBeShownFromSuspendedState;
- (unsigned long long)consentType;
- (bool)customizeSpinner;
- (id)delegate;
- (id)initWithConfirmationCode:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(bool)arg3 confirmationCode:(id)arg4;
- (id)initWithName:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(bool)arg3;
- (void)setAcceptButton:(id)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setCachedButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSpinnerContainer:(id)arg1;
- (id)spinner;
- (id)spinnerContainer;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface TSUserConsentViewController : TSOBWelcomeController <TSSetupFlowItem> {
    unsigned long long  _consentType;
    <TSSIMSetupFlowDelegate> * _delegate;
    unsigned long long  _userConsentResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long userConsentResponse;

+ (void)calculateTitleAndDetailsWithName:(id)arg1 consentType:(unsigned long long)arg2 title:(id*)arg3 details:(id*)arg4;

- (void).cxx_destruct;
- (void)_acceptButtonTapped;
- (void)_cancelButtonTapped;
- (void)_declineButtonTapped;
- (void)_setNavigationItems;
- (bool)canBeShownFromSuspendedState;
- (id)delegate;
- (id)initWithConsentType:(unsigned long long)arg1 name:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUserConsentResponse:(unsigned long long)arg1;
- (unsigned long long)userConsentResponse;
- (void)viewDidLoad;

@end

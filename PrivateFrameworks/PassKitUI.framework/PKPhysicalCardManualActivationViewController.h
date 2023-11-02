
@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate> {
    PKPhysicalCardActionController * _actionController;
    NSString * _activationCode;
    PKBusinessChatController * _businessChatController;
    bool  _businessChatSupported;
    unsigned long long  _feature;
    PKOrderPhysicalCardHeroView * _hero;
    CLInUseAssertion * _inUseAssertion;
    CLLocationManager * _locationManager;
    PKPaymentPass * _paymentPass;
    PKPhysicalCard * _physicalCard;
    SFClient * _sharingClient;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentDisplayableError:(id)arg1;
- (void)_setupForCurrentState;
- (void)_showSpinner:(bool)arg1;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 accountUser:(id)arg3 paymentPass:(id)arg4 physicalCard:(id)arg5 activationCode:(id)arg6;
- (void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3;
- (id)presentationSceneIdentifierForPhysicalCardActionController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

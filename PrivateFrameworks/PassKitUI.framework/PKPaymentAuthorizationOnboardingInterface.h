
@interface PKPaymentAuthorizationOnboardingInterface : NSObject <PKLoadingViewControllerDelegate, PKPaymentAuthorizationInterface, PKPaymentSetupViewControllerDelegate> {
    PKAppleCardWelcomeExperiment * _applyWelcomeCardExperiment;
    PKPaymentAuthorizationContext * _authorizationContext;
    PKPaymentAuthorizationInterfaceConfiguration * _configuration;
    <PKPaymentAuthorizationOnboardingInterfaceDelegate> * _delegate;
    unsigned long long  _feature;
    long long  _onboardingContext;
    PKNavigationController * _primaryViewController;
    PKPaymentProvisioningController * _provisioningController;
    NSError * _setupError;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationOnboardingInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKNavigationController *primaryViewController;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) NSError *setupError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_bindFeatureApplication:(id)arg1 completion:(id /* block */)arg2;
- (id)_createBindRequestForFeatureApplication:(id)arg1;
- (id)_createPrimaryViewController;
- (void)_getAugmentedProduct:(id /* block */)arg1;
- (void)_getProduct:(id /* block */)arg1;
- (void)_loadFeatureOnboardingViewControllerForProduct:(id)arg1 completion:(id /* block */)arg2;
- (id)_setupErrorUserInfoWithBindToken:(id)arg1;
- (id)applyWelcomeCardExperiment;
- (id)delegate;
- (id)initWithOnboardingContext:(long long)arg1 authorizationContext:(id)arg2 configuration:(id)arg3;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (id)primaryViewController;
- (id)provisioningController;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryViewController:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setSetupError:(id)arg1;
- (id)setupError;
- (void)viewController:(id)arg1 canProceedWithInstallment:(bool)arg2 featureApplication:(id)arg3 completion:(id /* block */)arg4;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)willAppear;

@end

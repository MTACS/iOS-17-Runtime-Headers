
@interface STEyeReliefOnboardingController : OBNavigationController <STRestrictionsPINControllerDelegate> {
    id /* block */  _completionHandler;
    NSObject<STRootViewModelCoordinator> * _coordinator;
    _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView * _micaView;
    STHeroWelcomeController * _primaryWelcomeViewController;
    OBWelcomeController * _secondaryWelcomeViewController;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView *micaView;
@property (nonatomic, retain) STHeroWelcomeController *primaryWelcomeViewController;
@property (nonatomic, retain) OBWelcomeController *secondaryWelcomeViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelOnboarding;
- (void)_continueButtonPressed;
- (id)_createEyeReliefEDUController;
- (id)_createInitialViewControllerWithCoordinator:(id)arg1;
- (id)_createPINController;
- (id)_createSecondaryWelcomeController;
- (void)_dismissOnboardingAndEnable;
- (void)_handleResponse:(long long)arg1;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (id /* block */)completionHandler;
- (id)coordinator;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (id)initWithCoordinator:(id)arg1;
- (id)micaView;
- (void)play;
- (void)presentOverViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)primaryWelcomeViewController;
- (id)secondaryWelcomeViewController;
- (void)setPrimaryWelcomeViewController:(id)arg1;
- (void)setSecondaryWelcomeViewController:(id)arg1;
- (bool)validatePIN:(id)arg1 forPINController:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end


@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> {
    AKAppleIDAuthenticationController * _authenticationController;
    CDPUIDeviceToDeviceEncryptionFlowContext * _context;
    <CDPUIDeviceToDeviceEncryptionHelperDelegate> * _delegate;
    <CDPLocalSecretFollowUpProvider> * _followUpProvider;
    UIViewController * _initialTopViewController;
    UINavigationController * _navigationController;
    UIViewController * _presentingViewController;
}

@property (nonatomic, readonly) CDPUIDeviceToDeviceEncryptionFlowContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIDeviceToDeviceEncryptionHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CDPLocalSecretFollowUpProvider> *followUpProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

+ (id)_newLegacyFlowContext;
+ (id)_newLegacyFlowContextForAltDSID:(id)arg1;
+ (id)_newLegacyFlowContextWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)_authenticationContextForFlowContext:(id)arg1;
- (id)_authenticationController;
- (void)_beginUpgradeFlowWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_cdpErrorWithUnderlyingError:(id)arg1;
- (void)_configureNavigationController;
- (void)_configurePresentingViewControllerForModalPresentation;
- (void)_continueAuthenticatedUpgradeFlowWithContext:(id)arg1 authenticationResults:(id)arg2 completion:(id /* block */)arg3;
- (void)_continueUpgradeFlowWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_createLocalSecretForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_determineEscrowRepairUpgradeEligibilityForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_determineManateeUpgradeEligibilityForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_determineSecurityUpgradeEligibilityForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_determineUpgradeEligibilityForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_dismissNavigationControllerWithCompletion:(id /* block */)arg1;
- (bool)_hasLocalSecret;
- (bool)_hasManatee;
- (id)_inAppAuthenticationContextForFlowContext:(id)arg1;
- (bool)_inCircle;
- (void)_legacyRequestPermissionToContinueFlowWithCompletion:(id /* block */)arg1;
- (id)_navigationController;
- (id)_newSpinnerViewController;
- (id)_newUpgradeUIProvider;
- (void)_performAuthenticatedRepairFlowWithContext:(id)arg1 stateController:(id)arg2 completion:(id /* block */)arg3;
- (void)_postBiometricFollowUp;
- (void)_presentIneligibilityAlertForFlowContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentSpinnerViewControllerWithCompletion:(id /* block */)arg1;
- (id)_presentingNavigationController;
- (id)_presentingViewController;
- (id)_repairContextForFlowContext:(id)arg1 withAuthenticationResults:(id)arg2;
- (void)_requestPermissionToCreatePasscodeForFlowContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_stateControllerForFlowContext:(id)arg1 withAuthenticationResults:(id)arg2;
- (id)_stateControllerWithRepairContext:(id)arg1;
- (void)_validateLocalSecretForContext:(id)arg1 withStateController:(id)arg2 completion:(id /* block */)arg3;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)followUpProvider;
- (id)initWithContext:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (void)localSecretValidationCanCancelWithViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id /* block */)arg1;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setFollowUpProvider:(id)arg1;

@end

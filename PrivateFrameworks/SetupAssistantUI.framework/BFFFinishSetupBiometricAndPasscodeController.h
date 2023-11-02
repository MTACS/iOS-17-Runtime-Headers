
@interface BFFFinishSetupBiometricAndPasscodeController : NSObject <BFFFinishSetupFlowControlling, BFFPasscodeViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    <BYCapabilities> * _capabilities;
    id /* block */  _completion;
    BYFlowSkipController * _flowSkipController;
    NSString * _flowSkipIdentifier;
    BYPaneFeatureAnalyticsManager * _paneFeatureAnalyticsManager;
    NSString * _passcode;
}

@property (nonatomic, retain) <BYCapabilities> *capabilities;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BYFlowSkipController *flowSkipController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (nonatomic, copy) NSString *passcode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_userDidTapPasscodeCancelButton:(id)arg1;
- (id)capabilities;
- (id /* block */)completion;
- (id)createViewControllerWithPasscode:(id)arg1 completion:(id /* block */)arg2;
- (id)flowSkipController;
- (id)initWithFlowSkipIdentifier:(id)arg1;
- (id)paneFeatureAnalyticsManager;
- (id)passcode;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (bool)passcodeViewControllerAllowSkip:(id)arg1;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)preconditionViewControllerWithCompletion:(id /* block */)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlowSkipController:(id)arg1;
- (void)setPaneFeatureAnalyticsManager:(id)arg1;
- (void)setPasscode:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end

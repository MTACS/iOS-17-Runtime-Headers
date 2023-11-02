
@interface CDPUIInheritanceUIProviderImpl : NSObject <CDPUIBeneficiaryWelcomeViewControllerDelegate, CDPUIInheritanceAccessCodeScannerViewDelegate, CDPUIInheritanceUIProvider, CDPUIManualAccessCodeEntryViewControllerDelegate> {
    AKInheritanceAccessKey * _accessKey;
    id /* block */  _completion;
    OBNavigationController * _navigationController;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) AKInheritanceAccessKey *accessKey;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBNavigationController *navigationController;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildViewController;
- (id)_cameraLabel;
- (id)_cameraView;
- (id)_contentStackView;
- (void)_dismissViewControllerWithAccessKey:(id)arg1 error:(id)arg2;
- (void)_keyOptionsTapped:(id)arg1;
- (void)_presentWelcomePage;
- (void)_showEnterCodeLaterAlert;
- (void)_showManualCodeEntryPage;
- (void)_skipTapped:(id)arg1;
- (void)accessCodeScanner:(id)arg1 didFailToStarCapture:(id)arg2;
- (bool)accessCodeScanner:(id)arg1 didScanCode:(id)arg2;
- (id)accessKey;
- (id /* block */)completion;
- (id)initWithPresentingViewController:(id)arg1;
- (bool)manualAccessCodeEntry:(id)arg1 shouldFinishWithAccessCode:(id)arg2;
- (void)manualAccessCodeEntryDidCancel:(id)arg1;
- (id)navigationController;
- (id)presentingViewController;
- (void)promptForAccessCodeForAccessKey:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessKey:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)welcomeViewController:(id)arg1 didCompleteWithError:(id)arg2;

@end

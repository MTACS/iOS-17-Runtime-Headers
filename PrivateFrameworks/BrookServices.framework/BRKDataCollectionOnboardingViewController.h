
@interface BRKDataCollectionOnboardingViewController : OBTextWelcomeController {
    BRKSettings * _settings;
}

+ (void)presentInViewController:(id)arg1;
+ (bool)shouldPresentOnboarding;

- (void).cxx_destruct;
- (void)openSettings;
- (void)tappedDisable;
- (void)tappedEnable;
- (void)tappedLearnMore;
- (void)viewDidLoad;

@end

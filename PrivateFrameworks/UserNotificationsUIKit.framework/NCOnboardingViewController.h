
@interface NCOnboardingViewController : OBWelcomeController {
    <NCOnboardingViewControllerDelegate> * _delegate;
    OBTrayButton * _nextButton;
    bool  _nextButtonEnabled;
    NSString * _nextButtonText;
}

@property (nonatomic) <NCOnboardingViewControllerDelegate> *delegate;
@property (nonatomic) bool nextButtonEnabled;
@property (nonatomic, retain) NSString *nextButtonText;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_nextButtonPressed:(id)arg1;
- (id)delegate;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 contentLayout:(long long)arg3;
- (bool)nextButtonEnabled;
- (id)nextButtonText;
- (void)setDelegate:(id)arg1;
- (void)setNextButtonEnabled:(bool)arg1;
- (void)setNextButtonText:(id)arg1;
- (void)viewDidLoad;

@end

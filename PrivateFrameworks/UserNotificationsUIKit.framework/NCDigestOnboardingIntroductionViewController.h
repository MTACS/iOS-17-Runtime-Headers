
@interface NCDigestOnboardingIntroductionViewController : NCOnboardingViewController {
    UILabel * _clockLabel;
    NSString * _deferButtonText;
    UIView * _explainer1Container;
    UILabel * _explainer1Label;
    UILabel * _explainer1Title;
    UIView * _explainer2Container;
    UILabel * _explainer2Label;
    UILabel * _explainer2Title;
}

+ (id)introductionViewControllerWithDeferButtonText:(id)arg1;

- (void).cxx_destruct;
- (void)_deferButtonPressed:(id)arg1;
- (id)customContentView;
- (id)initWithDeferButtonText:(id)arg1;
- (id)secondaryCustomContentView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

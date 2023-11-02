
@interface WCGesturesOverviewViewController_iOS : OBWelcomeController {
    <WCOnboardingObserver> * _onboardingObserver;
}

@property (nonatomic) <WCOnboardingObserver> *onboardingObserver;

+ (id)createGesturesOverviewViewController;

- (void).cxx_destruct;
- (void)_tryItOutOnAppleWatch;
- (void)dismissOnboarding;
- (id)onboardingObserver;
- (void)setOnboardingObserver:(id)arg1;
- (void)viewDidLoad;

@end

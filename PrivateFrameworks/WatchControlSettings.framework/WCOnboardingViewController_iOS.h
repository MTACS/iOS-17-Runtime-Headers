
@interface WCOnboardingViewController_iOS : OBNavigationController {
    <WCOnboardingObserver> * _onboardingObserver;
}

@property (nonatomic) <WCOnboardingObserver> *onboardingObserver;

- (void).cxx_destruct;
- (void)_cancelOnboarding;
- (void)_tryItOut;
- (void)_turnOn;
- (id)onboardingObserver;
- (void)setOnboardingObserver:(id)arg1;
- (void)viewDidLoad;

@end

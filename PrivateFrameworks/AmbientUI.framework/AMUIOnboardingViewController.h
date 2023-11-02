
@interface AMUIOnboardingViewController : UIViewController <AMUIOnboardingContainerViewDelegate> {
    AMAmbientDefaults * _ambientDefaults;
    <AMUIOnboardingViewControllerDelegate> * _delegate;
    AMUIOnboardingContainerView * _onboardingContainerView;
}

@property (nonatomic) AMAmbientDefaults *ambientDefaults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIOnboardingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)ambientDefaults;
- (id)delegate;
- (void)loadView;
- (void)onboardingContainerView:(id)arg1 requestsDismissalWithUserIntent:(bool)arg2;
- (void)performDismissalAnimation;
- (void)performPresentationAnimation;
- (void)setAmbientDefaults:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

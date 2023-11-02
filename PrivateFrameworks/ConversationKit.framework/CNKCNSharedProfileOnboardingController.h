
@interface CNKCNSharedProfileOnboardingController : NSObject {
    CNSharedProfileOnboardingController * _onboardingController;
}

@property (nonatomic, retain) CNSharedProfileOnboardingController *onboardingController;

- (void).cxx_destruct;
- (id)onboardingController;
- (void)presentOnboardingControllerFrom:(id)arg1 withContactStore:(id)arg2;
- (void)presentOnboardingControllerOnLaunchIfNeededFrom:(id)arg1 withContactStore:(id)arg2;
- (void)setOnboardingController:(id)arg1;

@end

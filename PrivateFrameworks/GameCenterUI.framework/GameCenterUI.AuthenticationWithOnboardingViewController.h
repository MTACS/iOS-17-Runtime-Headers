
@interface GameCenterUI.AuthenticationWithOnboardingViewController : UINavigationController <GKOnboardingFlowDelegate> {
    void subject;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)onboardingFlowFinishedWithAction:(unsigned long long)arg1;

@end


@interface TeaUI.Bootstrapper : NSObject {
    void deferredPromise;
    void deferringGroup;
    void mainViewControllerFactory;
    void onboardingViewControllerFactory;
    void onboardingViewDismissalAnimator;
    void shouldCollapseSidebar;
}

- (void).cxx_destruct;
- (void)afterBootstrapOnQueue:(id)arg1 runBootstrapCallbackBlock:(id /* block */)arg2;
- (id)init;
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(bool)arg2;
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(bool)arg2 shouldCollapseSidebar:(bool)arg3;

@end

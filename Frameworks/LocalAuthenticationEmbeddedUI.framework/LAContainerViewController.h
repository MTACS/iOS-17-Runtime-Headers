
@interface LAContainerViewController : UIViewController {
    bool  _canShowInLockScreen;
    UIViewController * _currentViewController;
}

@property (nonatomic) bool canShowInLockScreen;
@property (nonatomic) UIViewController *currentViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_performWithoutAnimations:(id /* block */)arg1;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (void)_transitionFromVC:(id)arg1 toVC:(id)arg2 transitionStyle:(long long)arg3;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canShowInLockScreen;
- (id)currentViewController;
- (id)navigationItem;
- (void)presentViewController:(id)arg1 transitionStyle:(long long)arg2;
- (bool)resignFirstResponder;
- (void)setCanShowInLockScreen:(bool)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)viewDidLoad;

@end

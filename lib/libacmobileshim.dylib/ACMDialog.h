
@interface ACMDialog : UIViewController {
    long long  _savedStatusBarStyle;
}

@property (readonly) NSString *backgroundImageName;
@property long long savedStatusBarStyle;
@property (readonly) long long statusBarStyle;

+ (id)dialog;

- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (id)backgroundImageName;
- (void)dealloc;
- (void)disableControls:(bool)arg1;
- (void)hideWithParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)loadView;
- (long long)modalTransitionStyle;
- (long long)savedStatusBarStyle;
- (void)setSavedStatusBarStyle:(long long)arg1;
- (bool)shouldManuallyChangeStatusBarStyle;
- (void)showWithParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (long long)statusBarStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

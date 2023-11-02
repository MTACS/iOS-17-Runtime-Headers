
@interface TUDebugWindow : UIWindow {
    void _observableRootViewController;
    void debugDelegate;
    void isAllowed;
    void isPresenting;
}

@property (nonatomic, retain) UIViewController *rootViewController;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWindowScene:(id)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)onDidBecomeActive;
- (void)onWillEnterForeground:(id)arg1;
- (void)onWillResignActive;
- (id)rootViewController;
- (void)sendEvent:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end


@interface _SBStatusBarWindowRootViewController : UIViewController {
    SBStatusBarWindow * _statusBarWindow;
}

@property (nonatomic) SBStatusBarWindow *statusBarWindow;

- (void).cxx_destruct;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (id)initWithWindow:(id)arg1;
- (void)loadView;
- (void)setStatusBarWindow:(id)arg1;
- (id)statusBarWindow;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end


@interface PKWrapperViewController : UIViewController {
    long long  _type;
    UIViewController * _wrappedViewController;
}

@property (nonatomic, readonly) UIViewController *wrappedViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updatePreferredContentSize;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (unsigned long long)edgesForExtendedLayout;
- (bool)extendedLayoutIncludesOpaqueBars;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWrappedViewController:(id)arg1 type:(long long)arg2;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredUserInterfaceStyle;
- (void)viewWillLayoutSubviews;
- (id)wrappedViewController;

@end

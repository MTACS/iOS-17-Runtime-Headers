
@interface TeaUI.PromiseViewController : UIViewController {
    void contentViewController;
    void coverViewManager;
    void identifier;
    void navigationItemStyle;
    void parentingCompleteClosure;
    void promise;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end

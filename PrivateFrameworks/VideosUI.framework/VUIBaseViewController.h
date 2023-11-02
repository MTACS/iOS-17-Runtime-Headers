
@interface VUIBaseViewController : UIViewController

- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end

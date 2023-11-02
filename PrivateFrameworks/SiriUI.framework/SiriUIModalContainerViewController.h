
@interface SiriUIModalContainerViewController : UIViewController {
    UIViewController * _contentViewController;
    <SiriUIModalContainerViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic) <SiriUIModalContainerViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)contentViewController;
- (id)delegate;
- (id)initWithContentViewController:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end

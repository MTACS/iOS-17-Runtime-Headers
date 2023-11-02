
@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate> {
    UIView * _contentView;
    UIViewController * _contentViewController;
    <IAMViewControllerMetricsDelegate> * _metricsDelegate;
    bool  _shouldPresentFullscreen;
    bool  _shouldUsePadLayout;
    id /* block */  _viewControllerWillDismissBlock;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <IAMViewControllerMetricsDelegate> *metricsDelegate;
@property (nonatomic) bool shouldPresentFullscreen;
@property (readonly) bool shouldUsePadLayout;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ viewControllerWillDismissBlock;

- (void).cxx_destruct;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)contentView;
- (id)contentViewController;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)metricsDelegate;
- (long long)preferredStatusBarStyle;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setMetricsDelegate:(id)arg1;
- (void)setShouldPresentFullscreen:(bool)arg1;
- (void)setViewControllerWillDismissBlock:(id /* block */)arg1;
- (bool)shouldAutorotate;
- (bool)shouldPresentFullscreen;
- (bool)shouldUsePadLayout;
- (id /* block */)viewControllerWillDismissBlock;
- (void)viewDidLoad;

@end

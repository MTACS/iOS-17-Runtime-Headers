
@interface _SBMainScreenActiveInterfaceOrientationWindowRootViewController : SBFTouchPassThroughViewController {
    UIViewController * _contentViewController;
    unsigned long long  _supportedInterfaceOrientations;
}

@property (nonatomic) UIViewController *contentViewController;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(bool)arg1;
- (id)contentViewController;
- (void)setContentViewController:(id)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end


@interface UISnapshotModalViewController : UIViewController {
    UIViewController * _disappearingViewController;
    long long  _interfaceOrientation;
    UINavigationController * _parentController;
}

@property (nonatomic, retain) UIViewController *disappearingViewController;

- (void).cxx_destruct;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (id)disappearingViewController;
- (id)initWithInterfaceOrientation:(long long)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

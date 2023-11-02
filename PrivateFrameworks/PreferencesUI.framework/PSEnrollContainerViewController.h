
@interface PSEnrollContainerViewController : UIViewController {
    BiometricKitUIEnrollViewController * _enrollController;
}

@property (nonatomic, retain) BiometricKitUIEnrollViewController *enrollController;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)enrollController;
- (bool)isModalInPresentation;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setEnrollController:(id)arg1;
- (void)teardown;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end


@interface PSEnrollmentNavigationController : UINavigationController {
    <PSEnrollmentNavigationControllerDismissalDelegate> * _dismissalDelegate;
}

@property (nonatomic) <PSEnrollmentNavigationControllerDismissalDelegate> *dismissalDelegate;

- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (bool)canBeShownFromSuspendedState;
- (id)dismissalDelegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredStatusBarStyle;
- (void)setDismissalDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

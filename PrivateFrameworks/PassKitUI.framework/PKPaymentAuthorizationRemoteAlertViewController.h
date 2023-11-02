
@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    PKPaymentAuthorizationPresentersCoordinator * _presentersCoordinator;
}

@property (nonatomic, readonly) PKPaymentAuthorizationPresentersCoordinator *presentersCoordinator;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (int)_preferredStatusBarVisibility;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)askForDismissalWithReason:(unsigned long long)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)configureAppearance;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithUserInfo:(id)arg1 dismissalHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)arg1;
- (id)initializePresentersCoordinatorWithUserInfo:(id)arg1;
- (void)noteActivatedWithPresentationMode:(long long)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentersCoordinator;
- (void)presentersCoordinatorDidInvalidate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateStatusBarVisibility;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

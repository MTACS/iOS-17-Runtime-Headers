
@interface ActionButtonConfigurationUI.ScreenViewModelTrackingViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void viewModel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider * _viewProvider;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithViewProvider:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end

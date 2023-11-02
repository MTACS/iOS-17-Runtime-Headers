
@interface PKAddPassesRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKServiceAddPassesViewControllerResultsDelegate, UIAdaptivePresentationControllerDelegate> {
    PKServiceAddPassesViewController * _controller;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (void)_dismiss;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 ingestionDidFinishWithResult:(unsigned long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end

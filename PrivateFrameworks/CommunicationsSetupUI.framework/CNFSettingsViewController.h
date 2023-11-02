
@interface CNFSettingsViewController : PSViewController {
    UIViewController<PSController> * __currentChildViewController;
    CNFPendingDeepLinkRepresentation * _pendingDeepLinkRepresentation;
}

@property (nonatomic, retain) UIViewController<PSController> *_currentChildViewController;
@property (nonatomic, retain) CNFPendingDeepLinkRepresentation *pendingDeepLinkRepresentation;

- (void).cxx_destruct;
- (id)_currentChildViewController;
- (bool)_hasPendingDeepLink;
- (void)_invokePendingDeepLink;
- (void)_loadChildViewController;
- (void)applicationDidResume;
- (void)containerViewControllerShouldUpdate:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)name;
- (id)pendingDeepLinkRepresentation;
- (long long)serviceType;
- (void)setPendingDeepLinkRepresentation:(id)arg1;
- (void)set_currentChildViewController:(id)arg1;
- (id)settingsClassName;
- (id)specifierTitle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

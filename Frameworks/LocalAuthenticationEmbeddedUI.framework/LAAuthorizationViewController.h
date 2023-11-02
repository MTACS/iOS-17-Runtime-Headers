
@interface LAAuthorizationViewController : UIViewController <_AuthorizationRemoteViewControllerHostDelegate> {
    id /* block */  _completion;
    LAAuthenticatorServiceConfiguration * _configuration;
    <LAAuthorizationViewControllerDelegate> * _delegate;
    _AuthorizationRemoteViewControllerHost * _remoteVC;
}

@property (nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAAuthorizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (bool)active;
- (id)delegate;
- (void)didProvideAuthorizationRequirementWithReply:(id /* block */)arg1;
- (void)dismiss;
- (id)initWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (void)presentInContainerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)sheetDidFinishWithError:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end


@interface _SFWebAppViewController : _UIRemoteViewController <SFWebAppRemoteViewControllerProtocol> {
    <_SFWebAppViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFWebAppViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_sf_sceneDidBecomeActive:(id)arg1;
- (void)_sf_sceneDidEnterBackground:(id)arg1;
- (void)_sf_sceneWillEnterForeground:(id)arg1;
- (void)_sf_sceneWillResignActive:(id)arg1;
- (id)delegate;
- (void)didAddToHomeScreen;
- (void)didChangeFullScreen:(bool)arg1;
- (void)didChangeLoadingState:(bool)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(bool)arg2;
- (void)didDecideShouldShowLinkPreviews:(bool)arg1;
- (void)didFinishInitialLoad:(bool)arg1;
- (void)didLoadWebView;
- (void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)handlePushNotificationActivation:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (void)processWebPushForWebAppWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)willOpenCurrentPageInBrowser;
- (void)willOpenURLInHostApplication:(id)arg1;

@end

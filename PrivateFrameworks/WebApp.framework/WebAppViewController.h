
@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    CPSPromise * _connectionPromiseForPush;
    _SFWebAppViewController * _contentViewController;
    bool  _hasCustomScheme;
    bool  _hasShownLoadingViewController;
    NSTimer * _hideSnapshotTimer;
    LoadingViewController * _loadingViewController;
    long long  _orientation;
    bool  _wasLaunchedForWebPush;
    UIWebClip * _webClip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool wasLaunchedForWebPush;
@property (nonatomic, readonly) UIWebClip *webClip;

- (void).cxx_destruct;
- (void)_cancelHideSnapshotTimer;
- (void)_connectToService;
- (void)_removeRemoteView;
- (void)_setUpContentViewController:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)dealloc;
- (void)hideLoadingView;
- (id)initWithWebClip:(id)arg1;
- (void)notificationActivated:(id)arg1;
- (void)openURLWithCustomSchemeIfNeeded;
- (void)processWebPushWithIdentifier:(id)arg1;
- (void)setWasLaunchedForWebPush:(bool)arg1;
- (void)timeLimitForLoadCompletionExpired;
- (void)viewDidAppear:(bool)arg1;
- (bool)wasLaunchedForWebPush;
- (void)webAppViewController:(id)arg1 didChangeLoadingState:(bool)arg2;
- (void)webAppViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(id)arg1;
- (id)webClip;

@end

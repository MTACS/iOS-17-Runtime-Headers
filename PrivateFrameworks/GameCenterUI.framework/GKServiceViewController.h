
@interface GKServiceViewController : GKNavigationController <GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface, GKExtensionProtocol> {
    bool  _alwaysShowDoneButton;
    int  _hostPID;
    UIViewController * _privateViewController;
    double  _statusBarHeight;
}

@property (nonatomic) bool alwaysShowDoneButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hostPID;
@property (nonatomic, retain) UIViewController *privateViewController;
@property (nonatomic) double statusBarHeight;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_addDoneButtonToViewController:(id)arg1;
- (void)_startObservingChangesToProperties;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)_stopObservingChangesToProperties;
- (bool)_useBackdropViewForWindowBackground;
- (bool)alwaysShowDoneButton;
- (void)cancelServiceViewController;
- (void)constructPrivateViewController;
- (id)daemonProxy;
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
- (void)dashboardDidChangeToViewState:(long long)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)donePressed:(id)arg1;
- (void)finish;
- (void)finishAndPlayChallenge:(id)arg1;
- (void)finishWithTurnBasedMatch:(id)arg1;
- (int)hostPID;
- (id)init;
- (void)messageFromClient:(id)arg1;
- (void)nudge;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPaths;
- (void)performSelectorOnHostController:(SEL)arg1;
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)presentInitialViewController:(id)arg1;
- (id)privateViewController;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)quitTurnBasedMatch:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)requestDashboardLogoImageWithHandler:(id /* block */)arg1;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* block */)arg1;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(id /* block */)arg2;
- (void)resetPrivateViewController;
- (void)serviceViewControllerCreated:(id)arg1;
- (void)setAlwaysShowDoneButton:(bool)arg1;
- (void)setHostPID:(int)arg1;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setPrivateViewController:(id)arg1;
- (void)setStatusBarHeight:(double)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(id /* block */)arg3;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (bool)shouldAnimatePresentationForPrivateViewController:(id)arg1;
- (double)statusBarHeight;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

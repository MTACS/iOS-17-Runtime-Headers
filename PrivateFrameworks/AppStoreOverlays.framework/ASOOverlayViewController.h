
@interface ASOOverlayViewController : UIApplicationRotationFollowingController <ASORemoteContextProvider, ASORemoteViewControllerDelegate> {
    ASOHostContext * _context;
    ASORemoteOverlay * _currentOverlay;
    bool  _isViewServiceLoading;
    ASOOverlayManager * _overlayManager;
    NSOperationQueue * _presentationQueue;
    ASORemoteViewController * _remoteViewController;
    NSObject<OS_dispatch_queue> * _viewServiceQueue;
}

@property (nonatomic) ASOHostContext *context;
@property (nonatomic, retain) ASORemoteOverlay *currentOverlay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isViewServiceLoading;
@property (nonatomic) ASOOverlayManager *overlayManager;
@property (nonatomic, retain) NSOperationQueue *presentationQueue;
@property (nonatomic, retain) ASORemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *viewServiceQueue;

- (void).cxx_destruct;
- (void)_loadRemoteViewController:(id /* block */)arg1;
- (void)_loadViewServiceIfNeeded:(id /* block */)arg1;
- (id)context;
- (id)currentOverlay;
- (void)didEnterBackground;
- (void)didFinishDismissingOverlay:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dismissOverlay;
- (void)failAllQueuedOverlaysWithError:(id)arg1;
- (id)hostContextForOverlayViewService;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isViewServiceLoading;
- (void)loadViewServiceIfNeeded;
- (id)overlayManager;
- (void)presentOverlay:(id)arg1;
- (id)presentationQueue;
- (id)remoteViewController;
- (id)remoteViewControllerForOverlayViewService;
- (void)setContext:(id)arg1;
- (void)setCurrentOverlay:(id)arg1;
- (void)setIsViewServiceLoading:(bool)arg1;
- (void)setOverlayManager:(id)arg1;
- (void)setPresentationQueue:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setViewServiceQueue:(id)arg1;
- (void)shutdownViewServiceIfOverlayOffScreen;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)viewServiceQueue;
- (void)willStartPresentingOverlay:(id)arg1;

@end

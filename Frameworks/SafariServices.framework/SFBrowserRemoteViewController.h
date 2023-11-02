
@interface SFBrowserRemoteViewController : _UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol> {
    <SFBrowserRemoteViewControllerDelegate> * _delegate;
    bool  _didLoadWebView;
    bool  _hasBeenDisplayedAtLeastOnce;
    bool  _isInFullScreen;
    bool  _shouldDetermineVisibilityOnNextLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFBrowserRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic, readonly) bool onScreen;
@property (getter=isOnScreenForVolumeDisplay, nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (void)_determineVisibilityIfNeeded;
- (void)_sf_sceneDidEnterBackground:(id)arg1;
- (void)_sf_sceneWillEnterForeground:(id)arg1;
- (id)delegate;
- (void)didAddToHomeScreen;
- (void)didChangeFullScreen:(bool)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(bool)arg2;
- (void)didDecideShouldShowLinkPreviews:(bool)arg1;
- (void)didFinishInitialLoad:(bool)arg1;
- (void)didLoadWebView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (bool)isOnScreenForVolumeDisplay;
- (void)setDelegate:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)volumeAudioCategory;
- (void)willDismissServiceViewController;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willOpenCurrentPageInBrowser;
- (void)willOpenURLInHostApplication:(id)arg1;
- (id)windowSceneForVolumeDisplay;

@end

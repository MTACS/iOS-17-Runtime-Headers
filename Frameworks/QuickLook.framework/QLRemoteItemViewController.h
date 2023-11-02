
@interface QLRemoteItemViewController : QLItemViewController <QLCustomItemViewControllerHost, QLPrintingProtocol, QLRemotePopoverTracker> {
    NSLayoutConstraint * _bottomConstraint;
    NSExtension * _extension;
    bool  _fullScreen;
    NSDictionary * _hostConfiguration;
    QLPreviewExtensionHostContext * _hostContext;
    QLCustomItemViewControllerHostProxy * _hostViewControllerProxy;
    bool  _isAppearing;
    bool  _isVisible;
    id /* block */  _loadHandler;
    bool  _needsSetup;
    <QLRemotePopoverTracker> * _popoverTracker;
    <QLPrintingProtocol> * _printer;
    id /* block */  _readyToDisplay;
    bool  _readyToLoad;
    QLRemotePreviewHostViewController * _remoteViewController;
    NSLayoutConstraint * _topConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) QLRemotePreviewHostViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadRemoteViewControllerForContext:(id)arg1;
- (void)_performLoadHandlerIfNeeded;
- (void)_performSetUpWithRemoteViewController:(id)arg1 extension:(id)arg2 request:(id)arg3 hostContext:(id)arg4;
- (void)_registerLoadingHandler:(id /* block */)arg1;
- (bool)canClickToToggleFullscreen;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canShowNavBar;
- (bool)canShowToolBar;
- (bool)canSwipeToDismiss;
- (void)dealloc;
- (void)dismissQuickLook;
- (void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fullscreenBackgroundColor;
- (void)getFrameWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)preloadViewControllerForContext:(id)arg1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(id /* block */)arg3;
- (bool)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(id /* block */)arg2;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerWantsFullScreen:(bool)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)printer;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id /* block */)arg1;
- (id)remoteViewController;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setFullScreen:(bool)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

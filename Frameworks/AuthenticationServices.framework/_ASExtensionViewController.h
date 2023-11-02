
@interface _ASExtensionViewController : UIViewController <_ASExtensionHostContextDelegate> {
    bool  _allowRequestingUIFromNonUIRequest;
    bool  _dismissOnBackground;
    NSExtension * _extension;
    NSExtensionContext<_ASExtensionHostContext> * _nonUIHostContext;
    NSTimer * _nonUIRequestTimer;
    UIViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissOnBackground;
@property (nonatomic, readonly) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSExtensionContext *nonUIHostContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginNonUIRequest:(bool)arg1 connectionHandler:(id /* block */)arg2;
- (void)_beginRequestWithConnectionHandler:(id /* block */)arg1;
- (void)_extensionRequestDidFinish:(bool)arg1;
- (void)_invalidateNonUIRequestTimerIfNeeded;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_nonUIRequestTimedOut;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_setRemoteViewController:(id)arg1;
- (bool)_shouldUseNonUIRequestTimer;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (bool)dismissOnBackground;
- (id)extension;
- (id)initWithExtension:(id)arg1;
- (id)nonUIHostContext;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)setDismissOnBackground:(bool)arg1;

@end

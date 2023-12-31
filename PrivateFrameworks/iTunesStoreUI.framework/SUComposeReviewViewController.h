
@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {
    NSURL * _compositionURL;
    SKComposeReviewViewController * _remoteViewController;
}

@property (nonatomic, readonly) NSURL *compositionURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_showRemoteView;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)compositionURL;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)init;
- (id)initWithCompositionURL:(id)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;

@end

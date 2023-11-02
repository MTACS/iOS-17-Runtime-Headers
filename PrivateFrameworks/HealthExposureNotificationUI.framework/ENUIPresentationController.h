
@interface ENUIPresentationController : NSObject <ENUIHostViewControllerDelegate, ENUIRemotePresentationController> {
    bool  _didPresent;
    ENUIHostViewController * _hostViewController;
    _UIAsyncInvocation * _requestCancellationInvocation;
    UIWindow * _savedKeyWindow;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPresent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ENUIHostViewController *hostViewController;
@property (nonatomic, retain) _UIAsyncInvocation *requestCancellationInvocation;
@property (nonatomic, retain) UIWindow *savedKeyWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_dismissRemoteViewController;
- (void)_mainQueue_presentWithPresentationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)arg1;
- (void)_requestAndConfigureHostViewController:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)cancelPresentation;
- (void)dealloc;
- (bool)didPresent;
- (id)hostViewController;
- (void)hostViewControllerDidFinishWithError:(id)arg1;
- (void)presentWithPresentationRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)requestCancellationInvocation;
- (id)savedKeyWindow;
- (void)setDidPresent:(bool)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setSavedKeyWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end

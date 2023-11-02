
@interface VSWebAuthenticationViewController : UIViewController <VSMessageQueueDelegate, VSWebAuthenticationViewController, WKNavigationDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    bool  _cancellationAllowed;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    VSWebAuthenticationViewModel * _viewModel;
    WKWebView * _webView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredLogoSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSWebAuthenticationViewModel *viewModel;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_canonicalRequestForRequest:(id)arg1;
- (void)_didBeginActivity;
- (void)_didEndActivity;
- (void)_retrieveMessages;
- (void)_sendMessage:(id)arg1;
- (void)_sendMessages:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)activityIndicator;
- (void)dealloc;
- (id)delegate;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (bool)isCancellationAllowed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActivityIndicator:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

@end

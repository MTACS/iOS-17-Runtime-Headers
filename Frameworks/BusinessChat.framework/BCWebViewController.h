
@interface BCWebViewController : UIViewController <WKNavigationDelegate> {
    NSString * _callbackURI;
    <BCWebViewControllerDelegate> * _delegate;
    BCInvalidCertificatView * _invalidCertificatView;
    NSURL * _originURL;
    BCProgressIndicatorView * _progressIndicatorView;
    BCServerErrorView * _serverErrorView;
    bool  _wasCallbackCaptured;
    WKWebView * _webkitView;
}

@property (nonatomic, retain) NSString *callbackURI;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BCWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webkitView;

- (void).cxx_destruct;
- (id)callbackURI;
- (id)delegate;
- (id)initWithCallbackURI:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentCertificatErrorForHost:(id)arg1;
- (void)reload;
- (void)setCallbackURI:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebkitView:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)updateNavigationBar;
- (void)viewDidLoad;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)webkitView;

@end

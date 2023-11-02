
@interface PKRemoteDocumentationViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    long long  _context;
    UIBarButtonItem * _dismissButton;
    bool  _isLoading;
    NSURL * _url;
    WKWebView * _webView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *dismissButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoading;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (long long)context;
- (void)dismiss;
- (id)dismissButton;
- (void)handleDismiss:(id)arg1;
- (long long)handleNavigationAction:(id)arg1;
- (id)initWithContext:(long long)arg1 URL:(id)arg2;
- (bool)isLoading;
- (bool)isWithinBuddy;
- (void)loadContent;
- (void)navigation:(id)arg1 didFinishWithError:(id)arg2;
- (void)openURLInSafari:(id)arg1;
- (void)presentFatalErrorAlert;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setupActivityIndicatorView;
- (void)setupDismissButton;
- (void)setupWebView;
- (id)url;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end

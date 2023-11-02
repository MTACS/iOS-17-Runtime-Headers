
@interface PKBasicWebViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    NSURL * _url;
    WKWebView * _webView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)initWithURL:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)url;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end

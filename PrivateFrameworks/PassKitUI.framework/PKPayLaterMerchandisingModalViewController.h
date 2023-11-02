
@interface PKPayLaterMerchandisingModalViewController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate> {
    UIButton * _closeButton;
    PKPayLaterMerchandisingConfiguration * _configuration;
    bool  _didChangeUserInterfaceStyle;
    long long  _retryCount;
    UIScrollView * _scrollView;
    UIActivityIndicatorView * _spinner;
    PKPayLaterMerchandisingUtilities * _utilities;
    WKWebView * _webView;
    double  _webViewHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateWebViewHeightWithCompletion:(id /* block */)arg1;
- (void)_setupWebView:(id)arg1;
- (void)_showSpinnerView:(bool)arg1 showWebView:(bool)arg2 animate:(bool)arg3 completion:(id /* block */)arg4;
- (id)_viewControllerDescription;
- (id)_webViewConfiguration;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (bool)pkui_navigationBarHidden;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewDidClose:(id)arg1;

@end

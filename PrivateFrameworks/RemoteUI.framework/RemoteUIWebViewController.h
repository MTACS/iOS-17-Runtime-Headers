
@interface RemoteUIWebViewController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler> {
    <RemoteUIWebViewControllerDelegate> * _delegate;
    NSString * _dismissButtonAlignment;
    NSString * _dismissButtonLabel;
    id /* block */  _loadCompletion;
    UINavigationBar * _navigationBar;
    UINavigationItem * _navigationItem;
    bool  _scalesPageToFit;
    RUIStyle * _style;
    UIToolbar * _toolbar;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RemoteUIWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dismissButtonAlignment;
@property (nonatomic, copy) NSString *dismissButtonLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool scalesPageToFit;
@property (nonatomic, retain) RUIStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (void)_dismissWithPayload:(id)arg1;
- (id)_spinnerManagerIdentifier;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (void)dealloc;
- (id)delegate;
- (id)dismissButtonAlignment;
- (id)dismissButtonLabel;
- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadURL:(id)arg1 completion:(id /* block */)arg2;
- (id)navigationBar;
- (id)navigationItem;
- (bool)scalesPageToFit;
- (id)scriptForJSBridge;
- (id)scriptForScalesPageToFit;
- (void)setDelegate:(id)arg1;
- (void)setDismissButtonAlignment:(id)arg1;
- (void)setDismissButtonLabel:(id)arg1;
- (void)setScalesPageToFit:(bool)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)toolbar;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end

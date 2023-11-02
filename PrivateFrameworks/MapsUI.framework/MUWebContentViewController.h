
@interface MUWebContentViewController : UIViewController <MKInfoCardThemeListener, MUWebBridgeDelegate, WKNavigationDelegate, WKUIDelegate> {
    MUPlaceEnrichmentActionManager * _actionManager;
    UIActivityIndicatorView * _activityIndicatorView;
    MUWebBridge * _bridge;
    WKNavigation * _currentWebNavigation;
    double  _defaultHeight;
    <MUWebContentViewControllerDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    NSString * _html;
    bool  _loading;
    NSURL * _resolvedURL;
    NSURL * _url;
    MUWebContentTraits * _webContentTraits;
    WKWebView * _webView;
    MUWebViewFactoryItem * _webViewFactoryItem;
}

@property (nonatomic, retain) MUPlaceEnrichmentActionManager *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUWebContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)resolvedURLForRelativeURL:(id)arg1;

- (void).cxx_destruct;
- (void)_addLoadingSpinner;
- (bool)_canShowWhileLocked;
- (void)_cancel;
- (void)_finishLoading;
- (void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(id /* block */)arg1;
- (void)_invokeAction:(id)arg1 callbackHandler:(id /* block */)arg2;
- (void)_layoutAction:(id)arg1 callbackHandler:(id /* block */)arg2;
- (void)_propogateUserInterfaceStyleToWebModule;
- (void)_removeLoadingSpinner;
- (void)_removeModuleWithArguments:(id)arg1 callbackHandler:(id /* block */)arg2;
- (void)_resetBridge;
- (void)_setHeight:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setHeight:(id)arg1 callbackHandler:(id /* block */)arg2;
- (void)_startLoading;
- (id)actionManager;
- (void)configureWithHTML:(id)arg1 actionManager:(id)arg2 initialDefaultHeight:(double)arg3;
- (void)dealloc;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 traits:(id)arg2;
- (bool)isLoading;
- (void)setActionManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAddLoadingIndicator;
- (void)updateActionOverBridge:(id)arg1;
- (id)url;
- (void)viewDidLoad;
- (void)webBridgeDidConnect:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;

@end

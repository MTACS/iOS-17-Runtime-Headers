
@interface SXEmbedVideoComponentView : SXMediaComponentView <SXViewportChangeListener, WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, _WKFullscreenDelegate> {
    <SXComponentActionHandler> * _actionHandler;
    UIActivityIndicatorView * _activityIndicator;
    WKWebsiteDataStore * _dataStore;
    bool  _isPresentingFullscreen;
    SXWebContentLoadEvent * _loadEvent;
    <SXProxyAuthenticationHandler> * _proxyAuthenticationHandler;
    <SXSceneStateMonitor> * _sceneStateMonitor;
    SWCrashRetryThrottler * _webCrashRetryThrottler;
    WKWebView * _webView;
    bool  _webViewIsLoaded;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) WKWebsiteDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresentingFullscreen;
@property (nonatomic, retain) SXWebContentLoadEvent *loadEvent;
@property (nonatomic, readonly) <SXProxyAuthenticationHandler> *proxyAuthenticationHandler;
@property (nonatomic, readonly) <SXSceneStateMonitor> *sceneStateMonitor;
@property (readonly) Class superclass;
@property (nonatomic, retain) SWCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic) bool webViewIsLoaded;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (void)_webViewDidEnterElementFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitElementFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)actionHandler;
- (id)activityIndicator;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (id)dataStore;
- (void)discardContents;
- (void)handleError:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 sceneStateMonitor:(id)arg7 actionHandler:(id)arg8 websiteDataStore:(id)arg9 proxyAuthenticationHandler:(id)arg10;
- (void)initializeWebViewWithURL:(id)arg1;
- (bool)isPresentingFullscreen;
- (void)layoutSubviews;
- (id)loadEvent;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (id)proxyAuthenticationHandler;
- (void)renderContents;
- (void)reportLoadEventWithError:(id)arg1;
- (id)sceneStateMonitor;
- (void)setIsPresentingFullscreen:(bool)arg1;
- (void)setLoadEvent:(id)arg1;
- (void)setWebCrashRetryThrottler:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setWebViewIsLoaded:(bool)arg1;
- (bool)shouldAllowRequestToURL:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (void)updateWebViewToWidth:(double)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;
- (id)webCrashRetryThrottler;
- (id)webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webViewEnteredFullscreen:(id)arg1;
- (void)webViewExitedFullscreen:(id)arg1;
- (bool)webViewIsLoaded;

@end

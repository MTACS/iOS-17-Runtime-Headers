
@interface MFWebViewLoadingController : NSObject <EMRemoteContentURLSessionObserver, WKNavigationDelegate, WKNavigationDelegatePrivate> {
    EMContentRepresentation * _contentRepresentation;
    NSError * _error;
    NSURL * _loadingURL;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    <MFMailWebProcessDelegate> * _webProcessDelegate;
    bool  _webProcessPluginNeedsUpdate;
    WKWebView * _webView;
    MFWebViewDictionary * _webViewConstants;
}

@property (nonatomic, retain) EMContentRepresentation *contentRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *loadingURL;
@property (nonatomic, retain) _WKRemoteObjectInterface *remoteObjectInterface;
@property (readonly) Class superclass;
@property (nonatomic) <MFMailWebProcessDelegate> *webProcessDelegate;
@property (nonatomic) bool webProcessPluginNeedsUpdate;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic, readonly) MFWebViewDictionary *webViewConstants;

- (void).cxx_destruct;
- (void)_doIssueLoadRequest;
- (void)_reconveneWebProcessBundle;
- (void)_registerWebProcessDelegate:(id)arg1;
- (void)_unregisterWebProcessDelegate:(id)arg1;
- (id)contentRepresentation;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)loadingURL;
- (void)reload;
- (void)remoteContentURLSession:(id)arg1 failedToProxyURL:(id)arg2 failureReason:(long long)arg3;
- (id)remoteObjectInterface;
- (void)requestWebViewLoadWithContentRepresentation:(id)arg1;
- (void)requestWebViewLoadWithContext:(id)arg1;
- (void)requestWebViewLoadWithError:(id)arg1;
- (void)requestWebViewLoadWithoutShowingMessageWithContext:(id)arg1;
- (void)requestWebViewLoadWithoutShowingMessageWithRepresentation:(id)arg1;
- (void)setContentRepresentation:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLoadingURL:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setWebProcessDelegate:(id)arg1;
- (void)setWebProcessPluginNeedsUpdate:(bool)arg1;
- (void)setWebView:(id)arg1;
- (void)slapWebView;
- (void)stopLoading;
- (void)webProcessBrowserContextControllerDidBecomeAvailable;
- (id)webProcessDelegate;
- (bool)webProcessPluginNeedsUpdate;
- (id)webView;
- (id)webViewConstants;

@end

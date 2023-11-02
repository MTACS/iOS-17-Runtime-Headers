
@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {
    NSObject<OS_os_activity> * _activity;
    bool  _allowFetchingOverCellularNetwork;
    id /* block */  _completionHandler;
    NSTimer * _loadingTimeoutTimer;
    NSArray * _pendingTouchIconURLs;
    long long  _state;
    _WKRemoteObjectInterface * _touchIconObserverInterface;
    NSSet * _touchIconURLs;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSSiteMetadataRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(id /* block */)arg2;
- (void)_downloadPendingTouchIconURLs;
- (void)_scheduleTimeoutWithTimeInterval:(double)arg1;
- (void)_setUpRemoteObjectProxies;
- (bool)_shouldFetchOverPrivateRelay;
- (void)_tearDownRemoteObjectProxies;
- (void)clearWebView;
- (id /* block */)completionHandler;
- (id)description;
- (void)didCompleteWithResult:(id)arg1;
- (void)didCreateWebView;
- (void)didFailFetchWithError:(id)arg1;
- (void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 allowFetchingOverCellularNetwork:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (void)loadRequest;
- (void)resetState;
- (void)startOffscreenFetching;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)webViewConfiguration;
- (void)willClearWebView;

@end

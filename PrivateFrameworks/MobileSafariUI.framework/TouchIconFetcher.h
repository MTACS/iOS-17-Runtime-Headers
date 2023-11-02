
@interface TouchIconFetcher : NSObject <TouchIconFetcherObserver> {
    <TouchIconFetcherWebProcessController> * _activityProxy;
    NSMutableArray * _completionBlocks;
    bool  _fetchingURLs;
    bool  _invalidated;
    _WKRemoteObjectInterface * _touchIconFetcherObserver;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpTouchIconFetcherObserver;
- (id)_webProcessActivityProxy;
- (void)didFetchTouchIconURLs:(id)arg1 forURL:(id)arg2;
- (void)fetchTouchIconURLsWithCompletion:(id /* block */)arg1;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;

@end

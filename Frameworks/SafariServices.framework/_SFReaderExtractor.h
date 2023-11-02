
@interface _SFReaderExtractor : NSObject <WKNavigationDelegate, _SFReaderControllerDelegate> {
    id /* block */  _completionHandler;
    NSURL * _currentURL;
    NSTimer * _loadingTimeoutTimer;
    WKProcessPool * _processPool;
    _SFReaderController * _readerController;
    NSTimer * _readerExtractionTimer;
    WKWebView * _readerWebView;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configuration;
- (void)_finishWithContent:(id)arg1 error:(id)arg2;
- (void)_invalidateTimers;
- (id)_processPool;
- (void)_scheduleLoadingTimeout;
- (void)_scheduleReaderDataExtractionTimeout;
- (void)_setUpReaderController;
- (void)getExtractedDataForURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getExtractedDataForURL:(id)arg1 withData:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (void)readerController:(id)arg1 didCollectArticleContent:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

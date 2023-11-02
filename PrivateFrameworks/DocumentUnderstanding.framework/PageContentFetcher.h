
@interface PageContentFetcher : NSObject <WKNavigationDelegate> {
    NSMutableData * _data;
    id /* block */  _pendingBlock;
    NSString * _providedJavaScript;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_copyDefaultWebViewConfiguration;

- (void).cxx_destruct;
- (id)init;
- (void)runJavaScriptOnHTML:(id)arg1 javaScript:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end


@protocol WebFrameLoadDelegate <NSObject>

@optional

- (void)webView:(WebView *)arg1 didCancelClientRedirectForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didChangeLocationWithinPageForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didCreateJavaScriptContext:(JSContext *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFailLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFailProvisionalLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFinishLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didReceiveTitle:(NSString *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didStartProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 willCloseFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3 fireDate:(NSDate *)arg4 forFrame:(WebFrame *)arg5;
- (void)webView:(WebView *)arg1 windowScriptObjectAvailable:(WebScriptObject *)arg2;

@end


@protocol WKNavigationDelegate <NSObject>

@optional

- (void)webView:(void *)arg1 authenticationChallenge:(void *)arg2 shouldAllowDeprecatedTLS:(void *)arg3; // needs 3 arg types, found 8: WKWebView *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)webView:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: WKWebView *, WKNavigationAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webView:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 preferences:(void *)arg3 decisionHandler:(void *)arg4; // needs 4 arg types, found 10: WKWebView *, WKNavigationAction *, WKWebpagePreferences *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, WKWebpagePreferences *, void*
- (void)webView:(void *)arg1 decidePolicyForNavigationResponse:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: WKWebView *, WKNavigationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webView:(WKWebView *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webView:(void *)arg1 didReceiveAuthenticationChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WKWebView *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)webView:(WKWebView *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 navigationAction:(WKNavigationAction *)arg2 didBecomeDownload:(WKDownload *)arg3;
- (void)webView:(WKWebView *)arg1 navigationResponse:(WKNavigationResponse *)arg2 didBecomeDownload:(WKDownload *)arg3;
- (void)webViewWebContentProcessDidTerminate:(WKWebView *)arg1;

@end

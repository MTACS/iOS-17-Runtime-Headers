
@protocol WKHistoryDelegatePrivate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 didNavigateWithNavigationData:(WKNavigationData *)arg2;
- (void)_webView:(WKWebView *)arg1 didPerformClientRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didPerformServerRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didUpdateHistoryTitle:(NSString *)arg2 forURL:(NSURL *)arg3;

@end

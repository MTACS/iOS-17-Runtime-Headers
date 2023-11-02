
@protocol WKURLSchemeHandler <NSObject>

@required

- (void)webView:(WKWebView *)arg1 startURLSchemeTask:(id <WKURLSchemeTask>)arg2;
- (void)webView:(WKWebView *)arg1 stopURLSchemeTask:(id <WKURLSchemeTask>)arg2;

@end

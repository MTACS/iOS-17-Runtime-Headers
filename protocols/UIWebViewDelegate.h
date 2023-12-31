
@protocol UIWebViewDelegate <NSObject>

@optional

- (void)webView:(UIWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (bool)webView:(UIWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(UIWebView *)arg1;
- (void)webViewDidStartLoad:(UIWebView *)arg1;

@end

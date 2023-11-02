
@protocol _WKFullscreenDelegate <NSObject>

@optional

- (void)_webViewDidEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewDidExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillExitElementFullscreen:(WKWebView *)arg1;

@end

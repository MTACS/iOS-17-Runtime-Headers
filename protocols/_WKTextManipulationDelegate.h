
@protocol _WKTextManipulationDelegate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 didFindTextManipulationItem:(_WKTextManipulationItem *)arg2;
- (void)_webView:(WKWebView *)arg1 didFindTextManipulationItems:(NSArray *)arg2;

@end

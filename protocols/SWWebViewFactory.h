
@protocol SWWebViewFactory <NSObject>

@required

- (SWWebView *)createWebViewWithWebViewConfiguration:(WKWebViewConfiguration *)arg1 scrollSettings:(SWScrollSettings *)arg2;

@end


@protocol LoadingControllerDelegate <NSObject>

@required

- (void)loadingController:(LoadingController *)arg1 willLoadRequest:(NSURLRequest *)arg2 webView:(WKWebView *)arg3 userDriven:(bool)arg4;
- (void)loadingControllerWillStartUserDrivenLoad:(LoadingController *)arg1;

@end

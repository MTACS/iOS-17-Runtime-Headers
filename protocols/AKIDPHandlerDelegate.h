
@protocol AKIDPHandlerDelegate <NSObject>

@optional

- (void)IDPHandler:(AKIDPHandler *)arg1 didFinishLoadingPageInWebView:(WKWebView *)arg2;
- (void)IDPHandler:(AKIDPHandler *)arg1 didStartLoadingPageInWebView:(WKWebView *)arg2;
- (NSError *)IDPHandler:(AKIDPHandler *)arg1 sanitizeError:(NSError *)arg2;

@end

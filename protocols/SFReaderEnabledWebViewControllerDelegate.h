
@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>

@required

- (void)createReaderWebViewForWebViewController:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFindAppBannerWithContent:(NSString *)arg2;
- (void)webViewControllerDidDetermineReaderAvailability:(SFWebViewController *)arg1 dueTo:(long long)arg2;

@optional

- (void)webViewController:(SFWebViewController *)arg1 didExtractTextSamplesForTranslation:(NSArray *)arg2;
- (void)webViewControllerReaderDidBecomeReady:(SFWebViewController *)arg1;

@end

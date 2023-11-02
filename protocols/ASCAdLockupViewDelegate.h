
@protocol ASCAdLockupViewDelegate <NSObject>

@required

- (UIViewController *)presentingViewControllerForAdLockupView:(ASCAdLockupView *)arg1;

@optional

- (void)adLockupView:(ASCAdLockupView *)arg1 appStateDidChange:(NSString *)arg2;
- (void)adLockupView:(ASCAdLockupView *)arg1 didFailRequestWithError:(NSError *)arg2;
- (void)adLockupView:(ASCAdLockupView *)arg1 didPresentProductDetails:(bool)arg2;
- (void)adLockupView:(ASCAdLockupView *)arg1 didSelectOfferWithState:(NSString *)arg2;
- (void)adLockupView:(void *)arg1 preprocessOffer:(void *)arg2 inState:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: ASCAdLockupView *, <ASCOffer> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)adLockupView:(ASCAdLockupView *)arg1 videoStateDidChange:(long long)arg2;
- (void)adLockupViewDidBeginRequest:(ASCAdLockupView *)arg1;
- (void)adLockupViewDidBeginScreenshotsFetchRequest:(ASCAdLockupView *)arg1;
- (void)adLockupViewDidCancelScreenshotsFetchRequest:(ASCAdLockupView *)arg1;
- (void)adLockupViewDidFinishRequest:(ASCAdLockupView *)arg1;
- (void)adLockupViewDidFinishScreenshotsFetchRequest:(ASCAdLockupView *)arg1;
- (void)adLockupViewDidInvalidateIntrinsicContentSize:(ASCAdLockupView *)arg1;
- (void)adLockupViewDidSelectAdMarker:(ASCAdLockupView *)arg1;
- (ASCMetricsActivity *)metricsActivityForAdLockupView:(ASCAdLockupView *)arg1 toPerformActionOfOffer:(id <ASCOffer>)arg2 inState:(NSString *)arg3;
- (ASCMetricsActivity *)metricsActivityForPresentingProductDetailsOfAdLockupView:(ASCAdLockupView *)arg1 inState:(NSString *)arg2;

@end


@protocol SKUIBannerViewDelegate <NSObject>

@optional

- (void)bannerView:(SKUIBannerViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)bannerViewDidClose:(SKUIBannerViewController *)arg1;

@end

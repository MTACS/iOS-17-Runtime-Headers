
@protocol SUUIBannerViewDelegate <NSObject>

@optional

- (void)bannerView:(SUUIBannerViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)bannerViewDidClose:(SUUIBannerViewController *)arg1;

@end


@protocol PXCMMProgressBannerViewDelegate <NSObject>

@required

- (void)progressBannerView:(PXCMMProgressBannerView *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)progressBannerView:(PXCMMProgressBannerView *)arg1 presentViewController:(UIViewController *)arg2;
- (void)progressBannerViewLayoutHeightDidChange:(PXCMMProgressBannerView *)arg1;

@end

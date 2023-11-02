
@protocol HUBannerViewDelegate <NSObject>

@optional

- (void)bannerView:(HUBannerView *)arg1 dismissButtonTapped:(UIButton *)arg2;
- (void)bannerView:(HUBannerView *)arg1 footerViewTapped:(UIView *)arg2;
- (bool)bannerView:(HUBannerView *)arg1 shouldReceiveFooterViewTaps:(UIView *)arg2;

@end

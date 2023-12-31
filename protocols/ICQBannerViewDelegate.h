
@protocol ICQBannerViewDelegate <NSObject>

@optional

- (void)bannerView:(ICQBannerView *)arg1 action:(long long)arg2 parameters:(NSDictionary *)arg3 dismiss:(bool)arg4;
- (bool)bannerView:(ICQBannerView *)arg1 performAction:(long long)arg2 parameters:(NSDictionary *)arg3;
- (UIViewController *)presentingViewControllerForBannerView:(ICQBannerView *)arg1;
- (void)updateBannerView;

@end

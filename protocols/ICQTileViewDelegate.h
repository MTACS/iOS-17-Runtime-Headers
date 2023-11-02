
@protocol ICQTileViewDelegate <ICQBannerViewDelegate>

@optional

- (UIViewController *)presentingViewControllerForTileView:(ICQTileView *)arg1;
- (bool)tileView:(ICQTileView *)arg1 performAction:(long long)arg2 parameters:(NSDictionary *)arg3;

@end

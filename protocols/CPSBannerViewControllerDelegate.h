
@protocol CPSBannerViewControllerDelegate <NSObject>

@required

- (void)bannerViewController:(CPSBannerViewController *)arg1 requestsDismissalWithReason:(NSString *)arg2;
- (void)bannerViewControllerDidAppearWithIdentifier:(NSUUID *)arg1;
- (void)bannerViewControllerDidDisappearWithIdentifier:(NSUUID *)arg1;
- (void)bannerViewControllerTappedWithIdentifier:(NSUUID *)arg1;

@end

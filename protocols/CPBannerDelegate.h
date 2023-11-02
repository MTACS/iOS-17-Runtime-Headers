
@protocol CPBannerDelegate <NSObject>

@required

- (void)bannerDidAppearWithIdentifier:(NSUUID *)arg1;
- (void)bannerDidDisappearWithIdentifier:(NSUUID *)arg1;
- (void)bannerTappedWithIdentifier:(NSUUID *)arg1;

@end

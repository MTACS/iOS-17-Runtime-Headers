
@interface SFStoreBannerTracker : WBSBannerTracker

+ (id)sharedTracker;

- (long long)basis;
- (void)blockProductBanner:(id)arg1;
- (id)categoryName;
- (void)isProductBannerBlocked:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldBlockForIdentifier:(id)arg1 withDismissCount:(unsigned long long)arg2;

@end

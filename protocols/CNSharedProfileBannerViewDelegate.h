
@protocol CNSharedProfileBannerViewDelegate

@required

- (void)sharedProfileBannerView:(CNSharedProfileBannerView *)arg1 didDismissWithUpdatedContact:(CNContact *)arg2 forAction:(unsigned long long)arg3;
- (void)sharedProfileBannerView:(CNSharedProfileBannerView *)arg1 didUpdateContact:(CNContact *)arg2 forAction:(unsigned long long)arg3;

@end

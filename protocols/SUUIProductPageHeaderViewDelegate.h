
@protocol SUUIProductPageHeaderViewDelegate <NSObject>

@optional

- (SUUIMetricsController *)metricsControllerForProductPageHeader:(SUUIProductPageHeaderViewController *)arg1;
- (void)productPageHeaderView:(SUUIProductPageHeaderViewController *)arg1 didReloadItemOffer:(SUUIItemOffer *)arg2;
- (void)productPageHeaderView:(SUUIProductPageHeaderViewController *)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderView:(SUUIProductPageHeaderViewController *)arg1 didSelectURL:(NSURL *)arg2;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(SUUIProductPageHeaderViewController *)arg1;

@end

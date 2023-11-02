
@protocol PXCloudQuotaControllerHelperDelegate <NSObject>

@required

- (void)cloudQuotaControllerHelper:(PXCloudQuotaControllerHelper *)arg1 informationViewDidChange:(UIView *)arg2;
- (UIViewController *)presentingViewControllerForCloudQuotaControllerHelper:(PXCloudQuotaControllerHelper *)arg1;

@end


@protocol PXCloudQuotaControllerDelegate <NSObject>

@required

- (void)cloudQuotaController:(PXCloudQuotaController *)arg1 informationViewDidChange:(UIView *)arg2;
- (UIViewController *)presentingViewControllerForCloudQuotaController:(PXCloudQuotaController *)arg1;

@end

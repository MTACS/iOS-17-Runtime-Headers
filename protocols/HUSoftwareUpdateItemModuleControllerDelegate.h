
@protocol HUSoftwareUpdateItemModuleControllerDelegate <NSObject>

@required

- (NAFuture *)softwareUpdateModuleController:(HUSoftwareUpdateItemModuleController *)arg1 dismissViewController:(UIViewController *)arg2;
- (NAFuture *)softwareUpdateModuleController:(HUSoftwareUpdateItemModuleController *)arg1 navigateToViewController:(UIViewController<HUPreloadableViewController> *)arg2;
- (NAFuture *)softwareUpdateModuleController:(HUSoftwareUpdateItemModuleController *)arg1 presentViewController:(UIViewController *)arg2;

@end

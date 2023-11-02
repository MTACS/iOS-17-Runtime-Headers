
@protocol HUItemModuleControllerHosting <NSObject>

@required

- (NAFuture *)moduleController:(HUItemModuleController *)arg1 dismissViewControllerForRequest:(HUViewControllerDismissalRequest *)arg2;
- (NAFuture *)moduleController:(HUItemModuleController *)arg1 presentViewControllerForRequest:(HUViewControllerPresentationRequest *)arg2;
- (UITextField *)moduleController:(HUItemModuleController *)arg1 textFieldForVisibleItem:(HFItem *)arg2;

@optional

- (UIViewController *)presentingViewControllerForModuleController:(HUItemModuleController *)arg1;
- (void)reloadCellForItems:(NSArray *)arg1 withDiffableDataSourceReload:(bool)arg2;
- (void)updateCellForItems:(NSArray *)arg1;

@end

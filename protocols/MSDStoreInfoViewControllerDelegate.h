
@protocol MSDStoreInfoViewControllerDelegate <NSObject>

@required

- (void)didConfirmStoreAssignment:(MSDStoreInfo *)arg1;
- (void)viewWillAppear:(MSDStoreInfoViewController *)arg1 forStore:(MSDStoreInfo *)arg2;
- (void)viewWillClose:(MSDStoreInfoViewController *)arg1 forStore:(MSDStoreInfo *)arg2;

@end

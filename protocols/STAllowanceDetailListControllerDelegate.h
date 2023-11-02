
@protocol STAllowanceDetailListControllerDelegate <NSObject>

@required

- (void)allowanceDetailController:(STAllowanceDetailListController *)arg1 didSaveAllowance:(STAllowance *)arg2;

@optional

- (void)allowanceDetailController:(STAllowanceDetailListController *)arg1 didDeleteAllowance:(STAllowance *)arg2;
- (void)allowanceDetailControllerDidCancel:(STAllowanceDetailListController *)arg1;

@end

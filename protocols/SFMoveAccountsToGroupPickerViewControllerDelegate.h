
@protocol SFMoveAccountsToGroupPickerViewControllerDelegate <NSObject>

@required

- (void)moveAccountsToGroupPickerTableViewController:(SFMoveAccountsToGroupPickerViewController *)arg1 didPickSavedAccounts:(NSArray *)arg2;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(SFMoveAccountsToGroupPickerViewController *)arg1;

@end

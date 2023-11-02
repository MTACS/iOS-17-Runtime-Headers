
@protocol _SFAccountPickerTableViewControllerDelegate <NSObject>

@optional

- (void)accountPickerTableViewController:(_SFAccountPickerTableViewController *)arg1 didPickSavedAccounts:(NSArray *)arg2;
- (void)accountPickerTableViewController:(_SFAccountPickerTableViewController *)arg1 fillPasswordForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountPickerTableViewController:(_SFAccountPickerTableViewController *)arg1 fillUsernameForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountPickerTableViewController:(_SFAccountPickerTableViewController *)arg1 fillVerificationCode:(SFAutoFillOneTimeCode *)arg2;
- (void)accountPickerTableViewController:(_SFAccountPickerTableViewController *)arg1 fillVerificationCodeForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountPickerTableViewControllerDidCancel:(_SFAccountPickerTableViewController *)arg1;

@end

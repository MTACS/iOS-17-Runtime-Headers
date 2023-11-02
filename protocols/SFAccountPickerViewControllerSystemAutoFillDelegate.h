
@protocol SFAccountPickerViewControllerSystemAutoFillDelegate <NSObject>

@optional

- (void)accountPickerViewController:(SFAccountPickerViewController *)arg1 fillPasswordForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountPickerViewController:(SFAccountPickerViewController *)arg1 fillUsernameForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountPickerViewController:(SFAccountPickerViewController *)arg1 fillVerificationCode:(SFAutoFillOneTimeCode *)arg2;
- (void)accountPickerViewController:(SFAccountPickerViewController *)arg1 fillVerificationCodeForSavedAccount:(WBSSavedAccount *)arg2;

@end

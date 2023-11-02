
@protocol AFUIPasswordPickerDelegate <NSObject>

@required

- (void)passwordsController:(AFUIPasswordsController *)arg1 fillPassword:(NSString *)arg2;
- (void)passwordsController:(AFUIPasswordsController *)arg1 fillUsername:(NSString *)arg2;
- (void)passwordsController:(AFUIPasswordsController *)arg1 fillVerificationCode:(NSString *)arg2;
- (void)passwordsController:(AFUIPasswordsController *)arg1 selectedCredential:(SFSafariCredential *)arg2;

@end

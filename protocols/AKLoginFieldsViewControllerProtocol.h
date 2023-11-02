
@protocol AKLoginFieldsViewControllerProtocol <NSObject>

@required

- (void)clearPassword;
- (NSString *)passwordText;
- (NSString *)usernameText;

@optional

- (void)showPasswordField;

@end

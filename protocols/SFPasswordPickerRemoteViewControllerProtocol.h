
@protocol SFPasswordPickerRemoteViewControllerProtocol <SFPasswordRemoteViewControllerProtocol>

@required

- (void)fillPassword:(NSString *)arg1;
- (void)fillUsername:(NSString *)arg1;
- (void)fillVerificationCode:(NSString *)arg1;
- (void)selectedCredential:(SFSafariCredential *)arg1;

@end

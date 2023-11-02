
@protocol ACMUIControllerDelegate <NSObject>

@optional

- (void)onManageAppleIDForRealm:(NSString *)arg1;
- (void)uiControllerDidDisableSignInDialog:(id <ACMUIControllerProtocol>)arg1;
- (void)uiControllerDidEnableSignInDialog:(id <ACMUIControllerProtocol>)arg1;
- (UIView *)uiControllerManagerApprovalDialogSummaryView:(id <ACMUIControllerProtocol>)arg1;
- (void)uiControllerOnLogOut:(id <ACMUIControllerProtocol>)arg1;
- (void)uiControllerOnSignIForgot:(id <ACMUIControllerProtocol>)arg1;
- (void)uiControllerOnSignIn:(id <ACMUIControllerProtocol>)arg1 withPassword:(NSString *)arg2;
- (void)uiControllerOnSignInCancel:(id <ACMUIControllerProtocol>)arg1;
- (unsigned long long)uiControllerSignInDialogContentStyle:(id <ACMUIControllerProtocol>)arg1;
- (void)uiControllerWillDisableSignInDialog:(id <ACMUIControllerProtocol>)arg1;
- (void)uiControllerWillEnableSignInDialog:(id <ACMUIControllerProtocol>)arg1;

@end

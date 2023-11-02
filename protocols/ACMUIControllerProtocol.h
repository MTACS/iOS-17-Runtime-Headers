
@protocol ACMUIControllerProtocol <NSObject>

@required

- (void)cancelSignInWidget;
- (ACMAppleConnectImplComponents *)components;
- (<ACMUIControllerDelegate> *)delegate;
- (void)hideSignInWidgetWithParentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isWidgetEnabled;
- (bool)isWidgetShown;
- (<ACMBaseAuthenticationRequest> *)request;
- (void)setDelegate:(id <ACMUIControllerDelegate>)arg1;
- (void)setRequest:(id <ACMBaseAuthenticationRequest>)arg1;
- (void)setWidgetEnabled:(bool)arg1;
- (void)showAlertWithAlertMessage:(NSString *)arg1 buttonTitle:(NSString *)arg2 cancelButtonTitle:(NSString *)arg3 errorTag:(long long)arg4;
- (void)showSignInWidgetWithParentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (UIView *)managerApprovalDialogSummaryView;
- (unsigned long long)signInDialogContentStyle;

@end

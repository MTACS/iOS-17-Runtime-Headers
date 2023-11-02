
@protocol ACMAppleConnectImpl <NSObject>

@required

- (ACMAppleConnectImplComponents *)components;
- (void)logoutUser:(NSString *)arg1 inRealm:(NSString *)arg2;
- (UIView *)managerApprovalDialogSummaryView;
- (unsigned long long)signInDialogContentStyle;
- (void)updateLogLevel;

@end

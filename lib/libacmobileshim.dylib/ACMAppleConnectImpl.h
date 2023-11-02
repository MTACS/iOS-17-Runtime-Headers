
@interface ACMAppleConnectImpl : NSObject <ACMAppleConnectImpl, ACMUIControllerDelegate> {
    NSMutableSet * _handlers;
    NSError * _memoryError;
}

@property (readonly) ACMAppleConnectImplComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) NSMutableSet *handlers;
@property (readonly) unsigned long long hash;
@property long long logLevel;
@property (readonly) UIView *managerApprovalDialogSummaryView;
@property (readonly) unsigned long long signInDialogContentStyle;
@property (readonly) Class superclass;

- (void)authenticate:(id)arg1;
- (void)authenticateRunningOnMainThreadWithRequest:(id)arg1;
- (void)cancelRequests;
- (void)changeGestureRunningOnMainThreadWithRequest:(id)arg1;
- (void)changePasswordRunningOnMainThreadWithRequest:(id)arg1;
- (void)changeUserPasswordWithRequest:(id)arg1 isGesture:(bool)arg2;
- (id)components;
- (void)dealloc;
- (id)handlers;
- (id)init;
- (long long)logLevel;
- (void)logoutUser:(id)arg1 inRealm:(id)arg2;
- (id)managerApprovalDialogSummaryView;
- (id)memoryError;
- (void)scheduleHandler:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setLogLevel:(long long)arg1;
- (bool)shouldReleaseOnMemoryWarning;
- (unsigned long long)signInDialogContentStyle;
- (id)uiControllerManagerApprovalDialogSummaryView:(id)arg1;
- (void)uiControllerOnLogOut:(id)arg1;
- (unsigned long long)uiControllerSignInDialogContentStyle:(id)arg1;
- (void)unscheduleAllHandlers;
- (void)unscheduleHandler:(id)arg1;
- (void)updateLogLevel;
- (void)verifyServiceTicket:(id)arg1;

@end

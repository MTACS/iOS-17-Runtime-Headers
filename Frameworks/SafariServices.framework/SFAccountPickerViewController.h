
@interface SFAccountPickerViewController : UINavigationController <_SFAccountPickerTableViewControllerDelegate> {
    _SFAccountPickerTableViewController * _accountPickerTableViewController;
    _ASIncomingCallObserver * _callObserver;
    id /* block */  _completionHandler;
    bool  _isDismissingSelf;
    <SFAccountPickerViewControllerSystemAutoFillDelegate> * _systemAutoFillDelegate;
}

@property (nonatomic, retain) LAContext *authenticatedContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SFAccountPickerViewControllerSystemAutoFillDelegate> *systemAutoFillDelegate;

- (void).cxx_destruct;
- (void)_callCompletionHandlerIfNeeded:(id)arg1;
- (void)_dismiss;
- (void)_dismissWithAnimation:(bool)arg1 accounts:(id)arg2;
- (void)_viewControllerDismissalTransitionDidEnd:(id)arg1;
- (void)accountPickerTableViewController:(id)arg1 didPickSavedAccounts:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillPasswordForSavedAccount:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillUsernameForSavedAccount:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillVerificationCodeForSavedAccount:(id)arg2;
- (void)accountPickerTableViewControllerDidCancel:(id)arg1;
- (id)authenticatedContext;
- (id)initWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAuthenticatedContext:(id)arg1;
- (void)setSystemAutoFillDelegate:(id)arg1;
- (id)systemAutoFillDelegate;

@end

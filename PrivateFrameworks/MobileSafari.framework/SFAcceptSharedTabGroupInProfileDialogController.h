
@interface SFAcceptSharedTabGroupInProfileDialogController : NSObject <SFDialogControllerDelegate, SFDialogViewControllerPresenting, SFDialogViewPresenting> {
    id /* block */  _completionHandler;
    SFDialog * _dialog;
    SFDialogController * _dialogController;
    UINavigationController * _navigationController;
    _SFProfileSelectionTableViewController * _selectionViewController;
    NSString * _sharedTabGroupTitle;
    WBTabGroupManager * _tabGroupManager;
    UIWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)presentDialogInScene:(id)arg1 forSharedTabGroupWithTitle:(id)arg2 tabGroupManager:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_actionToOpenInProfile:(id)arg1;
- (id)_initWithScene:(id)arg1 sharedTabGroupTitle:(id)arg2 tabGroupManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_makeDialog;
- (void)_presentDialog;
- (id)_presentationViewController;
- (void)_showAllProfilesDialog;
- (void)cancel;
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (void)selectProfile;
- (int)webProcessIDForDialogController:(id)arg1;

@end

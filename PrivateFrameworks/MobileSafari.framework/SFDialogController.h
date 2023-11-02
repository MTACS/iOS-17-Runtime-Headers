
@interface SFDialogController : NSObject <SFDialogViewDelegate> {
    <SFDialogControllerDelegate> * _delegate;
    WBSTabDialogManager * _dialogManager;
    <SFDialogViewPresenting> * _dialogPresenter;
    SFDialogView * _dialogView;
    UIViewController * _dialogViewController;
    SFDialog * _presentedDialog;
    <SFDialogViewControllerPresenting> * _viewControllerPresenter;
    int  _webProcessID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFDialogControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SFDialogViewPresenting> *dialogPresenter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SFDialog<SFAuthenticatorDialog> *presentedAuthenticatorDialog;
@property (nonatomic, readonly) SFDialog *presentedDialog;
@property (readonly) Class superclass;
@property (nonatomic) <SFDialogViewControllerPresenting> *viewControllerPresenter;

+ (void)applicationDidEnterBackground;

- (void).cxx_destruct;
- (struct { int x1; unsigned long long x2; })_currentSlot;
- (int)_currentWebProcessID;
- (void)_dismissCurrentDialogWithResponse:(id)arg1;
- (void)_dismissDialogWithAdditionalAnimations:(id /* block */)arg1;
- (id)_initWithDialogManager:(id)arg1;
- (bool)_isPresentingDialog;
- (long long)_presentDialog:(id)arg1 forWebProcessID:(int)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (unsigned long long)_tabID;
- (void)cancelPresentedDialogIfNeeded;
- (id)delegate;
- (id)dialogPresenter;
- (void)dialogView:(id)arg1 didSelectActionAtIndex:(unsigned long long)arg2 withInputText:(id)arg3 passwordText:(id)arg4;
- (id)init;
- (void)owningTabWillClose;
- (void)owningWebViewDidChangeProcessID;
- (void)owningWebViewDidCommitNavigationWithURL:(id)arg1;
- (void)owningWebViewWillBecomeActive;
- (void)owningWebViewWillNavigate;
- (void)presentDialog:(id)arg1;
- (void)presentDialog:(id)arg1 animateAlongsidePresentation:(id /* block */)arg2 dismissal:(id /* block */)arg3;
- (void)presentNextDialogIfNeeded;
- (id)presentedAuthenticatorDialog;
- (id)presentedDialog;
- (void)setDelegate:(id)arg1;
- (void)setDialogPresenter:(id)arg1;
- (void)setViewControllerPresenter:(id)arg1;
- (id)viewControllerPresenter;

@end

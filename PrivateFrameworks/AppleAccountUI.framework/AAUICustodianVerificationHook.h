
@interface AAUICustodianVerificationHook : NSObject <AAUIOBTableWelcomeControllerDelegate, AAUIServerHook> {
    AIDAAccountManager * _accountManager;
    <RUIServerHookDelegate> * _delegate;
    bool  _forceInline;
    id /* block */  _hookCompletion;
    UIViewController * _presentingViewController;
    AAUINavigationItemSpinnerController * _spinnerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelFlow;
- (void)_dismissUI;
- (void)_displayCustodianFetchErrorAlert;
- (void)_displayListOfCustodiansWithContacts:(id)arg1;
- (void)_processAttributes:(id)arg1;
- (bool)_shouldPresentInline;
- (void)_verifyCustodianWithServerAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;
- (void)tableWelcomeViewControllerDidTapPrimaryButton;
- (void)tableWelcomeViewControllerDidTapSecondaryButton;

@end

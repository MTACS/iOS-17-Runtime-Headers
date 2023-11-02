
@interface AFUIAutoFillPasswordController : NSObject <AFUIAutoFillContentController, AFUIPasswordPickerDelegate> {
    RTIDocumentTraits * _documentTraits;
    bool  _hasAccountSuggestions;
    bool  _hasOneTimeCodeSuggestions;
    id /* block */  _menuChanged;
    AFUIPasswordsController * _passwordsController;
    UIViewController * _presentingViewController;
    id /* block */  _textOperationsHandler;
    <AFUIModalUIDelegate> * modalUIDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AFUIModalUIDelegate> *modalUIDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyboardDictionaryWithCredential:(id)arg1;
- (void)_loadAccountSuggestions:(id /* block */)arg1;
- (void)_loadOneTimeCodeSuggestions:(id /* block */)arg1;
- (id)_menuItemImageForOneTimeCodeSuggestion:(id)arg1;
- (void)_performTextOperationsWithAccountSuggestion:(id)arg1;
- (void)_performTextOperationsWithCredential:(id)arg1;
- (void)_performTextOperationsWithOneTimeCodeSuggestion:(id)arg1;
- (void)_performTextOperationsWithStringValue:(id)arg1;
- (void)_reloadOneTimeCodeSuggestions;
- (void)_showAllPasswordsView;
- (void)generateInitialMenu:(id /* block */)arg1 menuChanged:(id /* block */)arg2;
- (bool)hasSuggestions;
- (id)initWithDocumentTraits:(id)arg1 presentingViewController:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (id)modalUIDelegate;
- (void)passwordsController:(id)arg1 fillPassword:(id)arg2;
- (void)passwordsController:(id)arg1 fillUsername:(id)arg2;
- (void)passwordsController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)passwordsController:(id)arg1 selectedCredential:(id)arg2;
- (void)setModalUIDelegate:(id)arg1;

@end

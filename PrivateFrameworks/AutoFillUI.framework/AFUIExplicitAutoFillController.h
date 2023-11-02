
@interface AFUIExplicitAutoFillController : NSObject <AFUIContactPropertyPickerDelegate, AFUIPasswordPickerDelegate> {
    AFUIContactsController * _contactsController;
    <AFUIModalUIDelegate> * _delegate;
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    id /* block */  _keyboardOutputHandler;
    AFUIPasswordsController * _passwordsController;
    id /* block */  _textOperationsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUIModalUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isExplicitAutoFillInvocationWithDocumentTraits:(id)arg1;

- (void).cxx_destruct;
- (void)_finishWithSelectedCredential:(id)arg1;
- (void)_finishWithStringValue:(id)arg1;
- (void)_showContactsPanelFromViewController:(id)arg1;
- (void)_showCreditCardsPanelFromViewController:(id)arg1;
- (void)_showPasswordsPanelFromViewController:(id)arg1;
- (void)_yieldToClientApplicationIfNeeded;
- (void)authenticationDidEndWithCompletion:(id /* block */)arg1;
- (void)authenticationWillBeginWithCompletion:(id /* block */)arg1;
- (void)contactPickerDidCancel;
- (id)delegate;
- (id)initWithDocumentTraits:(id)arg1 documentState:(id)arg2 keyboardOutputHandler:(id /* block */)arg3;
- (id)initWithDocumentTraits:(id)arg1 documentState:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (bool)isSingleLineDocument;
- (void)passwordsController:(id)arg1 fillPassword:(id)arg2;
- (void)passwordsController:(id)arg1 fillUsername:(id)arg2;
- (void)passwordsController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)passwordsController:(id)arg1 selectedCredential:(id)arg2;
- (void)presentFromViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)userSelectedContactProperties:(id)arg1;

@end

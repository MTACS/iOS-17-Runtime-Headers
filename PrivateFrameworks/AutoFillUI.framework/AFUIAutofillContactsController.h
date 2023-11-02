
@interface AFUIAutofillContactsController : NSObject <AFUIAutoFillContentController, AFUIContactPropertyPickerDelegate> {
    AFUIContactsController * _contactsController;
    RTIDocumentTraits * _documentTraits;
    bool  _hasSuggestions;
    id /* block */  _performTextOperations;
    UIViewController * _presentingViewController;
    <AFUIModalUIDelegate> * modalUIDelegate;
}

@property (nonatomic, retain) AFUIContactsController *contactsController;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property bool hasSuggestions;
@property (nonatomic) <AFUIModalUIDelegate> *modalUIDelegate;
@property (nonatomic, copy) id /* block */ performTextOperations;
@property (retain) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)_addCustomInfoActions:(id)arg1;
- (id)_chooseOtherMenu;
- (void)_generateSuggestions:(id /* block */)arg1;
- (double)_maximumSuggestionsForReturnedSuggestions:(double)arg1;
- (id)_meActiom;
- (void)_performCustomInfoTextOperations:(id)arg1;
- (void)_presentContactPicker;
- (void)_presentCustomizeUI;
- (void)contactPickerDidCancel;
- (id)contactsController;
- (id)documentTraits;
- (void)generateInitialMenu:(id /* block */)arg1 menuChanged:(id /* block */)arg2;
- (bool)hasSuggestions;
- (id)initWithDocumentTraits:(id)arg1 presentingViewController:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (bool)isSingleLineDocument;
- (id)modalUIDelegate;
- (id /* block */)performTextOperations;
- (id)presentingViewController;
- (void)setContactsController:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setHasSuggestions:(bool)arg1;
- (void)setModalUIDelegate:(id)arg1;
- (void)setPerformTextOperations:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)userSelectedContactProperties:(id)arg1;

@end

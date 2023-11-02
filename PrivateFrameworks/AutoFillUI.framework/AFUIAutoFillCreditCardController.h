
@interface AFUIAutoFillCreditCardController : NSObject <AFUIAutoFillContentController> {
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    bool  _hasSuggestions;
    id /* block */  _performTextOperations;
    UIViewController * _presentingViewController;
    <AFUIModalUIDelegate> * modalUIDelegate;
}

@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property (nonatomic) bool hasSuggestions;
@property (nonatomic) <AFUIModalUIDelegate> *modalUIDelegate;
@property (nonatomic, copy) id /* block */ performTextOperations;
@property (retain) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)_generateSuggestions:(id /* block */)arg1;
- (double)_maximumSuggestionsForReturnedSuggestions:(double)arg1;
- (id)_menuIElementsForSuggestions:(id)arg1;
- (void)_openSettings;
- (void)_performTextOperationsWithSuggestion:(id)arg1;
- (id)dateStringTextContentType:(id)arg1 date:(id)arg2 placeholderHint:(id)arg3;
- (id)documentState;
- (id)documentTraits;
- (void)generateInitialMenu:(id /* block */)arg1 menuChanged:(id /* block */)arg2;
- (bool)hasSuggestions;
- (id)initWithDocumentTraits:(id)arg1 documentState:(id)arg2 presentingViewController:(id)arg3 textOperationsHandler:(id /* block */)arg4;
- (id)modalUIDelegate;
- (id /* block */)performTextOperations;
- (id)presentingViewController;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setHasSuggestions:(bool)arg1;
- (void)setModalUIDelegate:(id)arg1;
- (void)setPerformTextOperations:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;

@end

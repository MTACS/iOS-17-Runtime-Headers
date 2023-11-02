
@interface PKPeerPaymentActionAddMoneyViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountPassViewDelegate, PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentActionControllerDelegate, PKPeerPaymentThresholdTopUpControllerDelegate> {
    UIButton * _actionButton;
    PKEnterCurrencyAmountPassView * _amountPassView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _keyboardVisible;
    bool  _offerThresholdTopUp;
    PKNumericSuggestionsEnterValueAlgorithm * _suggestionGenerator;
    PKNumberPadSuggestionsView * _suggestionView;
    PKPeerPaymentThresholdTopUpController * _topUpController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBarButton;
- (void)_addBarButtonPressed:(id)arg1;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (bool)_isCurrentAmountValid;
- (bool)_shouldShakeCard:(id)arg1;
- (void)_showNavigationBarSpinner:(bool)arg1;
- (id)_spinnerBarButton;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (void)dealloc;
- (void)didSelectSuggestion:(id)arg1;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)arg1;
- (id)presentationSceneIdentifierForTopUpController:(id)arg1;
- (void)setCardBalance:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)thresholdTopUpController:(id)arg1 requestsDismissViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPresentViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPushViewController:(id)arg2;
- (void)thresholdTopUpControllerCompletedSetup:(id)arg1;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissViewController;

@end

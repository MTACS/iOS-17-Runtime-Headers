
@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountPassViewDelegate, PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate> {
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKeyboardFrame;
    UIScrollView * _scrollView;
    unsigned char  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (bool)_isCurrentAmountValid;
- (id)_nextBarButton;
- (void)_nextBarButtonPressed:(id)arg1;
- (bool)_shouldShakeWithNewAmount:(id)arg1;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (void)dealloc;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (void)setCardBalance:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissViewController;

@end


@interface PKPayLaterEnterAmountViewController : UIViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, UIScrollViewDelegate, _PKVisibilityBackdropViewDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    NSDecimalNumber * _amount;
    UILabel * _amountDetailsLabel;
    _PKVisibilityBackdropView * _blurringView;
    NSString * _currency;
    PKEnterCurrencyAmountView * _enterAmountView;
    UIBarButtonItem * _hiddenRightBarButtonItem;
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastSeenValidBounds;
    NSDecimalNumber * _maxAllowedAmount;
    NSDecimalNumber * _minAllowedAmount;
    PKAccount * _payLaterAccount;
    UIScrollView * _scrollView;
    bool  _showingSpinner;
    UIBarButtonItem * _spinningItem;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    unsigned char  _visibility;
    bool  _wasBackHidden;
}

@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDecimalNumber *maxAllowedAmount;
@property (nonatomic, retain) NSDecimalNumber *minAllowedAmount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateBlur;
- (bool)_isCurrentAmountValid;
- (void)_keyboardWillChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (bool)_shouldShakeWithNewAmount:(id)arg1;
- (void)_updateAmount:(id)arg1;
- (void)_updateBarButtonEnabledState;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (id)currencyAmount;
- (void)currencyAmountUpdated:(id)arg1;
- (void)dealloc;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithPayLaterAccount:(id)arg1;
- (id)keypadSuggestions;
- (void)loadView;
- (id)maxAllowedAmount;
- (id)minAllowedAmount;
- (void)nextButtonTapped;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAmountDetailsText:(id)arg1;
- (void)setMaxAllowedAmount:(id)arg1;
- (void)setMinAllowedAmount:(id)arg1;
- (bool)shouldAllowDecimalInput;
- (void)showNavigationBarSpinner:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end

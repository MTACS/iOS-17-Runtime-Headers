
@interface _TtCV9PassKitUI23EnterCurrencyAmountView11Coordinator : NSObject <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {
    void _amount;
    void _amountGuide;
    void _amountGuideColor;
    void _nextDisabled;
    void availableBalance;
    void currencyCode;
    void currentBalance;
    void keypadSuggestionSelected;
    void maxLoadAmount;
    void minLoadAmount;
    void transferType;
    void view;
}

- (void).cxx_destruct;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)init;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;

@end

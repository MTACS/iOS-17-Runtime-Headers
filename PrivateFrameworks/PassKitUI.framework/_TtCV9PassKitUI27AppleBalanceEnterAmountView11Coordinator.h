
@interface _TtCV9PassKitUI27AppleBalanceEnterAmountView11Coordinator : NSObject <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {
    void _addDisabled;
    void _amount;
    void _amountGuide;
    void _amountGuideColor;
    void accountModel;
    void configuration;
    void view;
}

- (void).cxx_destruct;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)init;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;

@end

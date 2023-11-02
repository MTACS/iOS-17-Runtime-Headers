
@interface PKPerformActionEnterValueView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPaymentDataProviderDelegate, PKPerformActionView, UITextFieldDelegate> {
    PKPaymentPassAction * _action;
    UIButton * _autoReloadButton;
    NSDecimalNumber * _cardBalance;
    NSDecimalNumber * _currentAmount;
    <PKPerformActionViewDelegate> * _delegate;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    PKNumericSuggestionLastInput * _lastInput;
    NSDecimalNumber * _maxLoadAmount;
    NSDecimalNumber * _maxLoadedBalance;
    NSDecimalNumber * _minLoadAmount;
    NSDecimalNumber * _minLoadedBalance;
    PKEnterValueNewBalanceView * _newBalanceView;
    PKPass * _pass;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentService * _peerPaymentService;
    bool  _shouldShowAutoReloadButton;
    PKNumericSuggestionsEnterValueAlgorithm * _suggestionGenerator;
    PKNumberPadSuggestionsView * _suggestionView;
    PKTransitPassProperties * _transitProperties;
}

@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, copy) NSDecimalNumber *maxLoadedBalance;
@property (nonatomic, copy) NSDecimalNumber *minLoadAmount;
@property (nonatomic, copy) NSDecimalNumber *minLoadedBalance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_amountTopPadding;
- (void)_createSubviews;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_didTapSetUpAutoReloadButton;
- (bool)_isCurrentAmountValid;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)_readCurrentBalance;
- (bool)_shouldShakeCard:(id)arg1;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_updateCurrentBalanceWithUpdatedTransitProperties;
- (void)_updatePeerPaymentAccount;
- (id)amountTextField;
- (id)cardBalance;
- (void)dealloc;
- (id)delegate;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (void)fetchServiceProviderDataWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (id)maxLoadAmount;
- (id)maxLoadedBalance;
- (id)minLoadAmount;
- (id)minLoadedBalance;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (id)pass;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)saveLastInputValues;
- (void)setCardBalance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMaxLoadedBalance:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)setMinLoadedBalance:(id)arg1;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)willDismissViewController;

@end

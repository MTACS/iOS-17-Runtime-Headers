
@interface PKEnterValueNewBalanceView : UIView <UIGestureRecognizerDelegate> {
    NSDecimalNumber * _additionalAmount;
    bool  _amountIsWithdrawal;
    NSDecimalNumber * _cardBalance;
    NSString * _currencyCode;
    NSNumberFormatter * _currentAmountFormatter;
    <PKEnterValueNewBalanceViewDelegate> * _delegate;
    UILabel * _label;
    NSDecimalNumber * _maxBalance;
    NSDecimalNumber * _maxLoadAmount;
    NSString * _maxLoadAmountText;
    NSDecimalNumber * _minBalance;
    NSDecimalNumber * _minLoadAmount;
    NSString * _promptText;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    bool  _subtractAdditionalAmountFromCurrentAmount;
    UITapGestureRecognizer * _tapRecognizer;
    NSString * _updatedBalancePromptText;
}

@property (nonatomic) bool amountIsWithdrawal;
@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKEnterValueNewBalanceViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxBalance;
@property (nonatomic, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, copy) NSString *maxLoadAmountText;
@property (nonatomic, copy) NSDecimalNumber *minBalance;
@property (nonatomic, copy) NSDecimalNumber *minLoadAmount;
@property (nonatomic, copy) NSString *promptText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *updatedBalancePromptText;

- (void).cxx_destruct;
- (void)_addSubviews;
- (void)_createAmountFormatter;
- (id)_minimalFormattedStringForAmount:(id)arg1;
- (id)_textForPrompt:(id)arg1 amount:(id)arg2;
- (void)_updateAdditionalAmount:(id)arg1 subtractAdditionalAmountFromCurrentAmount:(bool)arg2;
- (void)_updateBalanceText;
- (void)addAmountToBalance:(id)arg1;
- (bool)amountIsWithdrawal;
- (id)cardBalance;
- (id)currencyCode;
- (void)currentBalanceTapRecognized;
- (id)delegate;
- (id)init;
- (id)initWithCurrencyCode:(id)arg1;
- (void)layoutSubviews;
- (id)maxBalance;
- (id)maxLoadAmount;
- (id)maxLoadAmountText;
- (id)minBalance;
- (id)minLoadAmount;
- (id)promptText;
- (void)setAmountIsWithdrawal:(bool)arg1;
- (void)setCardBalance:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMaxLoadAmountText:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)setPromptText:(id)arg1;
- (void)setUpdatedBalancePromptText:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)subtractAmountFromBalance:(id)arg1;
- (id)updatedBalancePromptText;

@end

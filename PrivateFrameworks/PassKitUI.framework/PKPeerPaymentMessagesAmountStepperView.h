
@interface PKPeerPaymentMessagesAmountStepperView : UIView <UIGestureRecognizerDelegate> {
    id /* block */  _amountChangedHandler;
    NSString * _amountCurrency;
    UILabel * _amountLabel;
    NSString * _amountString;
    id /* block */  _amountTappedHandler;
    UIView * _centerView;
    NSNumberFormatter * _currencyFormatter;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    NSObject<OS_dispatch_source> * _longPressTimer;
    bool  _longPressTimerSuspended;
    NSDecimalNumber * _maxAmount;
    NSDecimalNumber * _minAmount;
    PKPeerPaymentMessagesRoundedButton * _minusButton;
    bool  _nextNumberPadActionCausesReset;
    PKPeerPaymentMessagesRoundedButton * _plusButton;
    bool  _plusMinusVisible;
    unsigned long long  _style;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _usedKeypad;
    bool  _usedStepper;
    bool  _usesAccessibilityLayout;
}

@property (nonatomic, copy) PKCurrencyAmount *amount;
@property (nonatomic, copy) id /* block */ amountChangedHandler;
@property (nonatomic, copy) id /* block */ amountTappedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxAmount;
@property (nonatomic, copy) NSDecimalNumber *minAmount;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic) bool usedKeypad;

+ (struct CGSize { double x1; double x2; })referenceSize;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forStyle:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_amountLabelFont;
- (double)_amountLabelFontSize;
- (void)_cleanupPosixString;
- (id)_decimalNumberFromPosixString:(id)arg1;
- (void)_decrementAmount;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_incrementAmount;
- (id)_posixFormatter;
- (id)_posixLocale;
- (id)_posixStringFromDecimalNumber:(id)arg1;
- (void)_shakeAmountLabel;
- (id)_stringForAction:(unsigned long long)arg1;
- (void)_updateContent;
- (id)_updatePosixString:(id)arg1 withAction:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3 maxDecimalPlaces:(unsigned long long)arg4;
- (id)amount;
- (id /* block */)amountChangedHandler;
- (id /* block */)amountTappedHandler;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleNumberPadAction:(unsigned long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maxAmount;
- (id)minAmount;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAmount:(id)arg1;
- (void)setAmountChangedHandler:(id /* block */)arg1;
- (void)setAmountTappedHandler:(id /* block */)arg1;
- (void)setMaxAmount:(id)arg1;
- (void)setMinAmount:(id)arg1;
- (void)setPlusMinusVisible:(bool)arg1 animated:(bool)arg2;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUsedKeypad:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usedKeypad;
- (void)validateNumberPadInput;

@end

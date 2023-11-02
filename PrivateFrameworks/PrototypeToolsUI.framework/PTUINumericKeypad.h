
@interface PTUINumericKeypad : UIView <_KeypadButtonTarget> {
    UIView * _backgroundView;
    _KeypadButton * _backspaceButton;
    NSNumber * _cachedNumberValue;
    NSString * _cachedStringValue;
    _KeypadButton * _clearButton;
    <PTUINumericKeypadDelegate> * _delegate;
    NSArray * _digitButtons;
    NSMutableArray * _digitsAfterDot;
    NSMutableArray * _digitsBeforeDot;
    _KeypadDismissButton * _dismissButton;
    _KeypadButton * _dotButton;
    bool  _hasDot;
    bool  _negative;
    bool  _showing;
    _KeypadButton * _signButton;
    UILabel * _valueLabel;
}

@property (nonatomic) double doubleValue;
@property (nonatomic, retain) NSString *stringValue;

+ (id)sharedKeypad;

- (void).cxx_destruct;
- (void)_appendDigit:(unsigned long long)arg1;
- (void)_appendDot;
- (void)_backspace;
- (void)_changeSign;
- (void)_clear;
- (void)_dismissButtonPress;
- (void)_flash;
- (double)_layoutButtonRow:(id)arg1 atY:(double)arg2;
- (double)_layoutButtonRow:(id)arg1 atY:(double)arg2 stretch:(bool)arg3;
- (unsigned long long)_remainingAllowedDigits;
- (void)_updateDisplayedValue;
- (double)doubleValue;
- (void)hideAnimated:(bool)arg1;
- (id)init;
- (void)keyPress:(id)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDoubleValue:(double)arg1;
- (void)setStringValue:(id)arg1;
- (void)showAnimated:(bool)arg1 forDelegate:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stringValue;

@end

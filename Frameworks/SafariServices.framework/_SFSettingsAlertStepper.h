
@interface _SFSettingsAlertStepper : _SFSettingsAlertControl <_SFSettingsAlertStepperConfiguration> {
    _SFSettingsAlertButton * _decrementButton;
    _SFSettingsAlertButton * _incrementButton;
    _SFSettingsAlertButton * _resetButton;
    long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long value;

- (void).cxx_destruct;
- (id)_button:(long long)arg1;
- (void)_decrementTapped:(id)arg1;
- (void)_incrementTapped:(id)arg1;
- (void)_resetTapped:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initUsingResetButton:(bool)arg1 usingTopSeparator:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnabled:(bool)arg1 forButton:(long long)arg2;
- (void)setImage:(id)arg1 forButton:(long long)arg2;
- (void)setText:(id)arg1 forButton:(long long)arg2;
- (long long)value;

@end

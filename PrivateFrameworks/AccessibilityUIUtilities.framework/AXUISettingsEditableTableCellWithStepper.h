
@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell {
    <AXUISettingsEditableTableCellWithStepperDelegate> * _delegate;
    UILabel * _secondsLabel;
    UIStepper * _stepper;
    bool  _testingUseNoPreferencesDelegate;
}

@property (nonatomic) <AXUISettingsEditableTableCellWithStepperDelegate> *delegate;
@property (nonatomic, retain) UILabel *secondsLabel;
@property (nonatomic, readonly) bool shouldResizeTextFieldOnUpdate;
@property (nonatomic, retain) UIStepper *stepper;
@property (nonatomic) bool testingUseNoPreferencesDelegate;

- (void).cxx_destruct;
- (long long)_axStepperKeyboardType;
- (double)_axStepperMaximumValue;
- (double)_axStepperMinimumValue;
- (void)_axStepperSetValue:(double)arg1;
- (double)_axStepperStepValue;
- (id)_axStepperStringValue;
- (id)_axStepperUnitString;
- (double)_axStepperValue;
- (void)_stepperChanged:(id)arg1;
- (id)_stepperValueFormatString;
- (void)_textFieldChanged:(id)arg1;
- (void)_updateAccessibilityLabelForTextField;
- (void)_updateSecondsLabel;
- (void)_updateSecondsLabelForDelegate:(id)arg1;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)initializeView;
- (void)layoutSubviews;
- (id)secondsLabel;
- (void)setDelegate:(id)arg1;
- (void)setSecondsLabel:(id)arg1;
- (void)setStepper:(id)arg1;
- (void)setTestingUseNoPreferencesDelegate:(bool)arg1;
- (bool)shouldResizeTextFieldOnUpdate;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stepper;
- (bool)testingUseNoPreferencesDelegate;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateWithValue:(double)arg1 shouldUpdateTextField:(bool)arg2;

@end


@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, HUDisableableCellProtocol, HUStepperCellProtocol, UITextFieldDelegate> {
    bool  _disabled;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    <HUStepperCellDelegate> * _stepperCellDelegate;
    NSNumber * _stepperValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *maximumValue;
@property (nonatomic, copy) NSNumber *minimumValue;
@property (nonatomic, copy) NSNumber *stepValue;
@property (nonatomic) <HUStepperCellDelegate> *stepperCellDelegate;
@property (nonatomic, copy) NSNumber *stepperValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_update;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (void)layoutSubviews;
- (id)maximumValue;
- (double)maximumValueForSpecifier:(id)arg1;
- (id)minimumValue;
- (double)minimumValueForSpecifier:(id)arg1;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setStepValue:(id)arg1;
- (void)setStepperCellDelegate:(id)arg1;
- (void)setStepperValue:(id)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (id)stepValue;
- (double)stepValueForSpecifier:(id)arg1;
- (id)stepperCellDelegate;
- (id)stepperValue;
- (id)stringValueForSpecifier:(id)arg1;
- (id)textFieldValue:(id)arg1;
- (double)valueForSpecifier:(id)arg1;

@end

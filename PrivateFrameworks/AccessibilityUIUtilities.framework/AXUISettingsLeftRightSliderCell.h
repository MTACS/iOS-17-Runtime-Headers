
@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell {
    double  _displayValue;
    UILabel * _leftLabel;
    UILabel * _rightLabel;
    UILabel * _valueLabel;
}

@property (nonatomic) double displayValue;

- (void).cxx_destruct;
- (bool)_accessibilityIgnoreInternalLabels;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (double)displayValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)labelColor;
- (void)layoutSubviews;
- (id)newControl;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setDisplayValue:(double)arg1;
- (void)updateValue;

@end


@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate> {
    UILabel * _label;
    UISlider * _slider;
}

- (void).cxx_destruct;
- (void)_valueChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)labelTapped;
- (void)numericKeypadDidUpdateValue:(id)arg1;
- (void)numericKeypadWillDismiss:(id)arg1;
- (void)updateCellCharacteristics;
- (void)updateDisplayedValue;
- (void)updateLabel;

@end

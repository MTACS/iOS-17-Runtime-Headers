
@interface CoreAudioKit.AUGenericViewFloatParameterCell : CoreAudioKit.AUGenericViewParameterCellBase {
    void unitLabel;
    void valueSlider;
}

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) UILabel *unitLabel;
@property (nonatomic) UISlider *valueSlider;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)initWithCoder:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUnitLabel:(id)arg1;
- (void)setValueSlider:(id)arg1;
- (void)sliderReleasedWithSender:(id)arg1;
- (void)sliderTouchedWithSender:(id)arg1;
- (void)sliderValueChangedWithSender:(id)arg1;
- (id)tintColor;
- (id)unitLabel;
- (id)valueSlider;

@end

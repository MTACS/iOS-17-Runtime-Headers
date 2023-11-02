
@interface AXSettingsTickedSliderCell : AXUISettingsLabeledSliderCell {
    AccessibilityAirPodSettingsController * _controller;
    AXDispatchTimer * _valueTimer;
}

@property (nonatomic, readonly) NSString *btAddress;
@property (nonatomic) AccessibilityAirPodSettingsController *controller;
@property (nonatomic, retain) AXDispatchTimer *valueTimer;

- (void).cxx_destruct;
- (double)_defaultSliderValue;
- (double)_determineDisplayValue:(double)arg1;
- (void)_updateRightLabelWithValue:(double)arg1;
- (id)accessibilityLabel;
- (id)btAddress;
- (id)controller;
- (void)handleSliderBeingDragged:(id)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (double)initialValue;
- (void)layoutSubviews;
- (id)maximumTextSizeString;
- (double)maximumValue;
- (double)minimumValue;
- (double)rightViewPadding;
- (void)setController:(id)arg1;
- (void)setValueTimer:(id)arg1;
- (Class)sliderCellClass;
- (id)valueTimer;

@end

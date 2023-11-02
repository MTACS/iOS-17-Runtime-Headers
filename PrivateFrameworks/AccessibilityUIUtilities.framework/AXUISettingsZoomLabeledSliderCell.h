
@interface AXUISettingsZoomLabeledSliderCell : AXUISettingsLabeledSliderCell

- (void)_updateRightLabelWithValue:(double)arg1;
- (id)accessibilityLabel;
- (void)handleSliderBeingDragged:(id)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (double)initialValue;
- (double)maximumValue;
- (double)minimumValue;

@end

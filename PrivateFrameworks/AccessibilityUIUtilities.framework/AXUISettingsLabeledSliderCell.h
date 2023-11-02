
@interface AXUISettingsLabeledSliderCell : PSTableCell {
    UIView * _leftView;
    UILabel * _rightLabel;
    UIView * _rightView;
    bool  _segmented;
    UISlider * _sliderView;
    <UITraitChangeRegistration> * _traitRegistration;
}

@property (nonatomic, retain) UIView *leftView;
@property (nonatomic, retain) UILabel *rightLabel;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic) bool segmented;
@property (nonatomic, retain) UISlider *sliderView;
@property (nonatomic, retain) <UITraitChangeRegistration> *traitRegistration;

- (void).cxx_destruct;
- (void)_updateLabelFont:(id)arg1;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (void)didChangeTraitPreferredContentSizeCategory;
- (void)didMoveToSuperview;
- (void)handleSliderBeingDragged:(id)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (double)initialValue;
- (bool)isAccessibilityElement;
- (id)labelTextColor;
- (id)leftView;
- (id)maximumTextSizeString;
- (double)maximumValue;
- (double)minimumValue;
- (id)rightLabel;
- (id)rightView;
- (double)rightViewPadding;
- (bool)segmented;
- (void)setLabelText:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setRightLabel:(id)arg1;
- (void)setRightView:(id)arg1;
- (void)setSegmented:(bool)arg1;
- (void)setSliderView:(id)arg1;
- (void)setTraitRegistration:(id)arg1;
- (id)slider;
- (Class)sliderCellClass;
- (id)sliderView;
- (id)traitRegistration;

@end

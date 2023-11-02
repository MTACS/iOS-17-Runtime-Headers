
@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView> {
    UIView * _backgroundView;
    UIView * _borderView;
    HUIconView * _decorationIconView;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    NSLayoutConstraint * _overlayTopConstraint;
    double  _primaryNormalizedValue;
    HUQuickControlSliderViewProfile * _profile;
    double  _rawSliderValue;
    unsigned long long  _reachabilityState;
    double  _secondaryNormalizedValue;
    double  _secondarySliderValue;
    bool  _showOffState;
    double  _sliderValue;
    HUQuickControlSliderValueOverlayView * _valueOverlayView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *borderView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HUIconView *decorationIconView;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *overlayTopConstraint;
@property (nonatomic) double primaryNormalizedValue;
@property (nonatomic, copy) HUQuickControlSliderViewProfile *profile;
@property (nonatomic) double rawSliderValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (nonatomic) double secondaryNormalizedValue;
@property (nonatomic) double secondarySliderValue;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic) bool showOffState;
@property (nonatomic) double sliderValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) HUQuickControlSliderValueOverlayView *valueOverlayView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_actuateTapticFeedback;
- (bool)_createDecorationIconViewIfNecessary;
- (struct { double x1; double x2; })_permittedValueRange;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(bool)arg1;
- (void)_updateOffState;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (id)backgroundView;
- (id)borderView;
- (id)decorationIconView;
- (id)feedbackGenerator;
- (id)initWithProfile:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)overlayTopConstraint;
- (double)primaryNormalizedValue;
- (id)profile;
- (double)rawSliderValue;
- (unsigned long long)reachabilityState;
- (double)secondaryNormalizedValue;
- (double)secondarySliderValue;
- (id)secondaryValue;
- (void)setBackgroundView:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void)setDecorationIconView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setOverlayTopConstraint:(id)arg1;
- (void)setPrimaryNormalizedValue:(double)arg1;
- (void)setProfile:(id)arg1;
- (void)setRawSliderValue:(double)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSecondaryNormalizedValue:(double)arg1;
- (void)setSecondarySliderValue:(double)arg1;
- (void)setSecondaryValue:(id)arg1;
- (void)setShowOffState:(bool)arg1;
- (void)setSliderValue:(double)arg1;
- (void)setValue:(id)arg1;
- (void)setValueOverlayView:(id)arg1;
- (bool)showOffState;
- (double)sliderValue;
- (id)value;
- (id)valueOverlayView;

@end


@interface HUQuickControlSwitchView : UIView <HUQuickControlControllableView> {
    double  _clippedValue;
    HUIconView * _decorationIconView;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    UIView * _knobView;
    HUQuickControlSwitchViewProfile * _profile;
    unsigned long long  _reachabilityState;
    HUDynamicFormattingLabel * _supplementaryValueLabel;
    double  _switchValue;
    UIView * _wellView;
}

@property (nonatomic) double clippedValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HUIconView *decorationIconView;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *knobView;
@property (nonatomic, copy) HUQuickControlSwitchViewProfile *profile;
@property (nonatomic) unsigned long long reachabilityState;
@property (nonatomic, retain) id secondaryValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUDynamicFormattingLabel *supplementaryValueLabel;
@property (nonatomic) double switchValue;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) UIView *wellView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_actuateTapticFeedback;
- (bool)_createDecorationIconViewIfNecessary;
- (void)_createSupplementaryValueLabelIfNecessary;
- (struct CGPoint { double x1; double x2; })_knobCenterForMetrics:(struct { double x1; })arg1 switchValue:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_knobFrameForMetrics:(struct { double x1; })arg1 switchValue:(double)arg2;
- (struct CGSize { double x1; double x2; })_knobSizeForMetrics:(struct { double x1; })arg1;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(bool)arg1;
- (void)_updateKnobViewTintColorAnimated:(bool)arg1;
- (void)_updateSupplementaryValueLabelAnimated:(bool)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (double)clippedValue;
- (id)decorationIconView;
- (id)feedbackGenerator;
- (id)initWithProfile:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)knobView;
- (void)layoutSubviews;
- (id)profile;
- (unsigned long long)reachabilityState;
- (void)setClippedValue:(double)arg1;
- (void)setDecorationIconView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setKnobView:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSupplementaryValueLabel:(id)arg1;
- (void)setSwitchValue:(double)arg1;
- (void)setValue:(id)arg1;
- (void)setWellView:(id)arg1;
- (id)supplementaryValueLabel;
- (double)switchValue;
- (id)value;
- (id)wellView;

@end

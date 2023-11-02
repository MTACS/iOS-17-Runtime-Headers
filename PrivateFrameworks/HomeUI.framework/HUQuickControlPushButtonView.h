
@interface HUQuickControlPushButtonView : UIView <HUQuickControlInteractiveView> {
    UILabel * _buttonLabel;
    unsigned long long  _controlState;
    HUIconView * _decorationIconView;
    NSString * _descriptionText;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    HUQuickControlPushButtonViewProfile * _profile;
    unsigned long long  _reachabilityState;
    HUQuickControlRoundButton * _roundButton;
    bool  _userInteractionActive;
}

@property (nonatomic, retain) UILabel *buttonLabel;
@property (nonatomic) unsigned long long controlState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HUIconView *decorationIconView;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, copy) HUQuickControlPushButtonViewProfile *profile;
@property (nonatomic) unsigned long long reachabilityState;
@property (nonatomic, retain) HUQuickControlRoundButton *roundButton;
@property (nonatomic, retain) id secondaryValue;
@property (readonly) Class superclass;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_actuateTapticFeedbackWithIntensity:(double)arg1;
- (void)_animateToEnlargeView;
- (void)_animateToShrinkView;
- (void)_contentSizeCategoryDidChange;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(bool)arg1;
- (void)_updateUI;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)buttonLabel;
- (unsigned long long)controlState;
- (void)dealloc;
- (id)decorationIconView;
- (id)descriptionText;
- (id)feedbackGenerator;
- (void)handleTap:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (void)layoutSubviews;
- (id)longPressGestureRecognizer;
- (id)profile;
- (unsigned long long)reachabilityState;
- (id)roundButton;
- (void)setButtonLabel:(id)arg1;
- (void)setControlState:(unsigned long long)arg1;
- (void)setDecorationIconView:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setRoundButton:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

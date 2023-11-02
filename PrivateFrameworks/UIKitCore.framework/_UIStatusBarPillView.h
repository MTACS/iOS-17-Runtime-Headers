
@interface _UIStatusBarPillView : _UIStatusBarRoundedCornerView <_UIStatusBarDisplayable, _UIStatusBarPersistentAnimation> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    UIColor * _pillColor;
    CALayer * _pulseLayer;
    bool  _pulsing;
    UIView * _subviewForBaselineAlignment;
    UIVisualEffect * _visualEffect;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, retain) UIColor *pillColor;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic, retain) CALayer *pulseLayer;
@property (nonatomic) bool pulsing;
@property (nonatomic) UIView *subviewForBaselineAlignment;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIVisualEffect *visualEffect;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUserInteractionEnabled;
- (void)layoutSubviews;
- (id)pillColor;
- (id)pulseLayer;
- (bool)pulsing;
- (void)resumePersistentAnimation;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPillColor:(id)arg1;
- (void)setPulseLayer:(id)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setSubviewForBaselineAlignment:(id)arg1;
- (void)setVisualEffect:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)subviewForBaselineAlignment;
- (id)viewForLastBaselineLayout;
- (id)visualEffect;
- (id)visualEffectView;

@end


@interface STUIStatusBarControlCenterGrabberView : STUIStatusBarRoundedCornerView <STUIStatusBarDisplayable>

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void)applyStyleAttributes:(id)arg1;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUserInteractionEnabled;

@end

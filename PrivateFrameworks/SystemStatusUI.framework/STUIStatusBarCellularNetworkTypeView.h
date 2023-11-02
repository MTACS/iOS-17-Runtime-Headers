
@interface STUIStatusBarCellularNetworkTypeView : UIView <STUIStatusBarDisplayable> {
    UIVectorLabel * _accessoryLabel;
    bool  _animatingUpdate;
    UIVectorLabel * _prefixLabel;
    STUIStatusBarStringView * _stringView;
    long long  _type;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, retain) UIVectorLabel *accessoryLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic, retain) UIVectorLabel *prefixLabel;
@property (nonatomic, retain) STUIStatusBarStringView *stringView;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, readonly) bool wantsCrossfade;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (void)_animateUpdateToText:(id)arg1 prefixLength:(long long)arg2 styleAttributes:(id)arg3 attributedText:(id)arg4 type:(long long)arg5;
- (bool)_isAnimatingUpdate;
- (id)accessibilityHUDRepresentation;
- (id)accessoryLabel;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)prefixLabel;
- (void)setAccessoryLabel:(id)arg1;
- (void)setAttributedText:(id)arg1 prefixLength:(long long)arg2 forType:(long long)arg3 animated:(bool)arg4;
- (void)setFixedWidth:(double)arg1;
- (void)setPrefixLabel:(id)arg1;
- (void)setStringView:(id)arg1;
- (void)setText:(id)arg1 prefixLength:(long long)arg2 withStyleAttributes:(id)arg3 forType:(long long)arg4 animated:(bool)arg5;
- (void)setType:(long long)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)stringView;
- (long long)type;
- (id)viewForLastBaselineLayout;
- (id)widthConstraint;

@end

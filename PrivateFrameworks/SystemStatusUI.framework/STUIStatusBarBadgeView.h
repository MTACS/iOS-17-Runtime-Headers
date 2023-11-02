
@interface STUIStatusBarBadgeView : UIView <STUIStatusBarDisplayable> {
    NSArray * _constraintsWithConstant;
    UILabel * _label;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, retain) NSArray *constraintsWithConstant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (id)constraintsWithConstant;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setConstraintsWithConstant:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)viewForLastBaselineLayout;

@end

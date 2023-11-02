
@interface STUIStatusBarMultilineStringView : UIView <STUIStatusBarDisplayable> {
    long long  _numberOfLines;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, readonly) NSArray *stringViews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (id)stringViews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

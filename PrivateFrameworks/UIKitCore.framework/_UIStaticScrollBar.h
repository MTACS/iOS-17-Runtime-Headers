
@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {
    NSArray * _constraints;
    UIView * _dividerLine;
    UIButton * _downButton;
    long long  _edge;
    NSInvocation * _invocation;
    UIScrollView * _scrollView;
    bool  _shouldInsetButtonsForIndex;
    UIButton * _upButton;
}

@property (nonatomic, readonly) long long desiredAccessoryEdge;
@property (nonatomic, readonly) UIButton *downButton;
@property (nonatomic) long long edge;
@property (nonatomic, readonly) bool overlay;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) bool shouldInsetButtonsForIndex;
@property (nonatomic, readonly) UIButton *upButton;

- (void).cxx_destruct;
- (unsigned long long)_axis;
- (id)_constraintsForEdge:(long long)arg1;
- (void)_setupSubviewsIfNeeded;
- (void)buttonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centeringBounds;
- (long long)desiredAccessoryEdge;
- (id)downButton;
- (long long)edge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)overlay;
- (id)scrollView;
- (void)setEdge:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setShouldInsetButtonsForIndex:(bool)arg1;
- (bool)shouldInsetButtonsForIndex;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)upButton;
- (void)update;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end

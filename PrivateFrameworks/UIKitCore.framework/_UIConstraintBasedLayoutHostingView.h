
@interface _UIConstraintBasedLayoutHostingView : UIView {
    bool  _hasAddedConstraints;
    UIView * _hostedView;
}

@property (nonatomic, retain) UIView *hostedView;

+ (bool)requiresConstraintBasedLayout;

- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (bool)_layoutHeightDependsOnWidth;
- (void)_layoutMetricsInvalidatedForHostedView;
- (struct CGSize { double x1; double x2; })_layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1 fixedAxes:(unsigned long long)arg2;
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(bool)arg1;
- (void)_setFrameWithAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)constraintsDidChangeInEngine:(id)arg1;
- (id)hostedView;
- (id)initWithHostedView:(id)arg1;
- (void)setHostedView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (void)willRemoveSubview:(id)arg1;

@end

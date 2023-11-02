
@interface ASCSkeletonLabel : UILabel {
    ASCContentSkeleton * _skeleton;
    UIColor * _skeletonColor;
    bool  _wantsAncestorFocusMarqueeAfterClearingSkeleton;
}

@property (nonatomic, readonly) long long effectiveSkeletonAlignment;
@property (nonatomic, copy) ASCContentSkeleton *skeleton;
@property (nonatomic, copy) UIColor *skeletonColor;
@property (nonatomic) bool wantsAncestorFocusMarqueeAfterClearingSkeleton;

- (void).cxx_destruct;
- (double)_baselineOffsetFromBottom;
- (double)_firstBaselineOffsetFromTop;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawSkeletonInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)effectiveSkeletonAlignment;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setSkeleton:(id)arg1;
- (void)setSkeletonColor:(id)arg1;
- (void)setWantsAncestorFocusMarqueeAfterClearingSkeleton:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)skeleton;
- (id)skeletonColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })skeletonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)wantsAncestorFocusMarqueeAfterClearingSkeleton;

@end

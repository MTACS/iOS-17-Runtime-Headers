
@protocol _UIScrollViewScrollIndicatorVisualStyle <NSObject>

@required

- (bool)clipsToBounds;
- (UIColor *)colorForIndicatorStyle:(long long)arg1 expanded:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cursorHitTestingInsets;
- (bool)doesExpand;
- (UIView *)fillView;
- (double)fillViewCornerRadiusForStaticDimensionSize:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestingRectForIndicatorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)staticDimensionExpandedSize;
- (double)staticDimensionSize;
- (struct { double x1; double x2; double x3; double x4; unsigned long long x5; })valuesForLayoutSizeAnimationWhenExpanding:(bool)arg1;

@end

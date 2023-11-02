
@interface UIAccessibilityHUDLayoutManager : NSObject

- (unsigned long long)_actualNumberOfLinesForLabelInHUD:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_imageCenterToTopForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize { double x1; double x2; })arg2;
- (id)containerViewForHUD:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsetsForHUD:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewFrameForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })imageViewSizeForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize { double x1; double x2; })arg2;
- (id)itemContainerViewForHUD:(id)arg1;
- (id)labelFontForHUD:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrameForHUD:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutBoundsForHUD:(id)arg1;
- (void)layoutSubviewsOfHUD:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumUnscaledSizeForHUD:(id)arg1 preferredLabelSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })preferredSizeForLabelInHUD:(id)arg1 maximumWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })unscaledSizeForHUD:(id)arg1 containingSize:(struct CGSize { double x1; double x2; })arg2;

@end

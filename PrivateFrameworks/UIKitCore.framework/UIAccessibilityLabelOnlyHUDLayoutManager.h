
@interface UIAccessibilityLabelOnlyHUDLayoutManager : UIAccessibilityHUDLayoutManager

- (bool)labelContainsSingleCharacter:(id)arg1;
- (id)labelFontForHUD:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrameForHUD:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })minimumUnscaledSizeForHUD:(id)arg1 preferredLabelSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })unscaledSizeForHUD:(id)arg1 containingSize:(struct CGSize { double x1; double x2; })arg2;

@end


@protocol CACLabeledGridOverlayManagerDelegate <CACSimpleContentViewManagerDelegate>

@required

- (long long)defaultNumberOfColumnsForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (void)didUpdateElementsForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (bool)isAlwaysShowingLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (bool)isOverlayFadingEnabledForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (bool)isPressOnFirstLevelEnabledForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (bool)isZoomEnabledForGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (<CACLabeledGridOverlayViewElement> *)labeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1 elementWithTitle:(NSString *)arg2 rectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)maximumLevelForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (double)overlayFadeDelayForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (float)overlayFadeOpacityForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (UIScreen *)screenForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (bool)showsNumbersInTopLeftForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })topLevelPortraitUpRectForLabeledGridOverlayManager:(CACLabeledGridOverlayManager *)arg1;

@end

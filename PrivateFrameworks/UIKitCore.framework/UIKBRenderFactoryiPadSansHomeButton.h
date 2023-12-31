
@interface UIKBRenderFactoryiPadSansHomeButton : UIKBRenderFactoryiPad

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (bool)_displaysAsControlKeyStyle:(id)arg1;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)controlKeyFontSize;
- (id)displayContentsForKey:(id)arg1;
- (double)dualStringKeyBottomFontSize;
- (struct CGPoint { double x1; double x2; })dualStringKeyBottomTextOffset;
- (double)dualStringKeyTopFontSize;
- (struct CGPoint { double x1; double x2; })dualStringKeyTopTextOffset;
- (struct CGPoint { double x1; double x2; })iPadFudgeControlKeyOffset;
- (bool)iPadSansHomeButtonLayout;
- (double)keyCornerRadius;
- (double)stringKeyFontSize;
- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x1; double x2; })symbolImageControlKeyOffset;

@end

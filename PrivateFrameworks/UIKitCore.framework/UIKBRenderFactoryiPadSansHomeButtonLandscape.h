
@interface UIKBRenderFactoryiPadSansHomeButtonLandscape : UIKBRenderFactoryiPadSansHomeButton

- (double)bottomRowDefaultFontSize;
- (double)controlKeyFontSize;
- (double)dualStringKeyBottomFontSize;
- (struct CGPoint { double x1; double x2; })dualStringKeyBottomTextOffset;
- (double)dualStringKeyTopFontSize;
- (struct CGPoint { double x1; double x2; })dualStringKeyTopTextOffset;
- (double)dynamicBottomRowMultiplier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dynamicInsets;
- (double)fallbackFontSize;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (struct CGPoint { double x1; double x2; })iPadFudgeControlKeyOffset;
- (double)keyCornerRadius;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (double)stringKeyFontSize;
- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x1; double x2; })symbolImageControlKeyOffset;

@end

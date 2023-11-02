
@interface UIKBRenderFactoryiPadHWR_Portrait : UIKBRenderFactory10Key_Round

- (bool)_anchorControlKeys;
- (struct CGPoint { double x1; double x2; })_controlKeyOffset;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (bool)_displaysAsControlKeyStyle:(id)arg1;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (long long)assetIdiom;
- (double)controlColumnWidthFactor;
- (double)deleteKeyFontSize;
- (double)dictationKeyFontSize;
- (double)dismissKeyFontSize;
- (struct CGPoint { double x1; double x2; })dismissKeyOffset;
- (double)internationalKeyFontSize;
- (double)keyCornerRadius;
- (id)lightKeycapsFontName;
- (id)messagesWriteboardKeyImageName;
- (double)moreKeyFontSize;
- (void)setupLayoutSegments;
- (bool)shouldUseRoundCornerForKey:(id)arg1;
- (double)spaceKeyFontSize;
- (struct CGPoint { double x1; double x2; })spaceReturnKeyTextOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })symbolFrameInsets;
- (id)thinKeycapsFontName;

@end

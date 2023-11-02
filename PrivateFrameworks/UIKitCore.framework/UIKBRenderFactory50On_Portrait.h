
@interface UIKBRenderFactory50On_Portrait : UIKBRenderFactory10Key_Round

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (long long)assetIdiom;
- (double)controlColumnWidthFactor;
- (double)deleteKeyFontSize;
- (unsigned long long)edgesWithInsetsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)keyCornerRadius;
- (double)keyplaneSwitchKeyFontSize;
- (id)lightKeycapsFontName;
- (id)messagesWriteboardKeyImageName;
- (double)returnKeyFontSize;
- (unsigned long long)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)setupLayoutSegments;
- (bool)shouldShowBottomRowEdge;
- (bool)shouldShowTopRowEdge;
- (double)spaceKeyFontSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })symbolFrameInsets;
- (id)thinKeycapsFontName;

@end

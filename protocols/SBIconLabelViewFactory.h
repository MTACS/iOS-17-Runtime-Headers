
@protocol SBIconLabelViewFactory <NSObject>

@required

+ (<SBIconLabelViewFactory> *)sharedInstance;

- (bool)canUseIconLabelView:(UIView<SBIconLabelView> *)arg1 toDisplayLabelWithSettings:(_UILegibilitySettings *)arg2 imageParameters:(SBIconLabelImageParameters *)arg3 forIconView:(SBIconView *)arg4;
- (UIView<SBIconLabelView> *)iconLabelViewWithSettings:(_UILegibilitySettings *)arg1 imageParameters:(SBIconLabelImageParameters *)arg2 forIconView:(SBIconView *)arg3;
- (void)prewarmForSettings:(_UILegibilitySettings *)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 minSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;

@end


@protocol SBAppPlatterDragSourceViewProviding <NSObject>

@required

- (UIView *)containerViewForBlurContentView;
- (BSCornerRadiusConfiguration *)initialCornerRadiusConfiguration;
- (NSArray *)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })initialDiffuseShadowParameters;
- (NSArray *)initialRimShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })initialRimShadowParameters;
- (bool)isDragging;
- (void)setDragging:(bool)arg1;
- (UIView *)sourceView;

@end

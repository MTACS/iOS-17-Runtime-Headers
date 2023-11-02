
@protocol SBUILegibilityEngine <NSObject>

@required

- (UIImage *)applyStrength:(double)arg1 toImage:(UIImage *)arg2 settings:(id <SBUILegibilitySettings>)arg3;
- (struct CGSize { double x1; double x2; })calculateShadowImageViewSizeForOriginalImage:(UIImage *)arg1 shadowImage:(UIImage *)arg2 settings:(id <SBUILegibilitySettings>)arg3;
- (<BSCancellable> *)executeAsyncLegibilityUpdateForContainer:(void *)arg1 image:(void *)arg2 settings:(void *)arg3 strength:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 15: UIView<SBUILegibilityResultDisplaying> *, UIImage *, <SBUILegibilitySettings> *, double*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { bool x1; }, UIImage *, <SBUILegibilitySettings> *, double*, <BSCancellable> *, NSError *, void*
- (void)executeLegibilityUpdateForContainer:(UIView<SBUILegibilityResultDisplaying> *)arg1 forImage:(UIImage *)arg2 settings:(id <SBUILegibilitySettings>)arg3 strength:(double*)arg4 engineResult:(struct { bool x1; }*)arg5;
- (void)prewarmForSettings:(id <SBUILegibilitySettings>)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 minSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (void)setUseMinFillHeightForTemplateGeneration:(bool)arg1;
- (bool)useMinFillHeightForTemplateGeneration;

@end

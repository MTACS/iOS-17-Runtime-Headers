
@interface SBFCARendererImpl : NSObject

+ (id)_actuallyRenderImage:(struct CGImage { }*)arg1 requiresBGRA:(bool)arg2 downsampleFactor:(double)arg3 layerCustomizer:(id /* block */)arg4;
+ (id)luminanceTreatmentFilters;
+ (id)renderMaterialImage:(struct CGImage { }*)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5;
+ (id)renderMaterialImage:(struct CGImage { }*)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 scaleAdjustment:(id /* block */)arg6;
+ (id)renderTreatedWallpaperImage:(struct CGImage { }*)arg1 needsLuminanceTreatment:(bool)arg2 needsDimmingTreatment:(bool)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;

@end

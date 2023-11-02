
@interface CNPhotoPickerImageWithEffectGenerator : NSObject

+ (id)coreImageFilterDisplayNames;
+ (id)coreImageFilterNames;
+ (id)displayNameForFilterNamed:(id)arg1;
+ (id)imageByApplyingEffect:(id)arg1 withContext:(id)arg2 toImage:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)imageByApplyingEffect:(id)arg1 withContext:(id)arg2 toImageData:(id)arg3;
+ (void)imagesByApplyingEffectsToImageData:(id)arg1 withScaleFactor:(double)arg2 originalImageScale:(double)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 completion:(id /* block */)arg5;

@end

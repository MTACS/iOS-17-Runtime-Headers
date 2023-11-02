
@interface NTKPhotosColorPalette : NTKFaceColorPalette

@property (nonatomic, readonly) UIColor *monocolorRampColor;

+ (void)applyColorRamp:(id)arg1 colorRampAmount:(double)arg2 monochromeColorMatrix:(id)arg3 toView:(id)arg4;
+ (void)colorRampForMonochromeColorMatrix:(id)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 transitionFraction:(double)arg4 completion:(id /* block */)arg5;
+ (void)removeColorRampFromView:(id)arg1;

- (id)_monocolorRampColor;
- (id)colorRampImage;
- (id)colorRampsIndex;
- (id)colorRampsIndexByColorName;
- (id)imageAsset;
- (bool)isOriginalColor;
- (id)monocolorRampImage;
- (id)swatchImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)swatchPrimaryColor;

@end

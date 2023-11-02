
@interface SMUFilter : NSObject

+ (void)applyProgramTextFiltersToLayer:(id)arg1;
+ (void)applyProgramVibrantColorFilterToLayer:(id)arg1;
+ (id)gaussianBlurFilterWithInputRadius:(double)arg1 inputHardEdges:(id)arg2 inputNormalizeEdges:(id)arg3 inputQuality:(id)arg4 inputIntermediateBitDepth:(id)arg5 inputDither:(id)arg6 name:(id)arg7;
+ (id)programTextBackgroundVibrantColorMatrixFilter;
+ (id)programTextBlurFilter1;
+ (id)programTextBlurFilter2;
+ (id)programTextColorMatrixFilter;

@end

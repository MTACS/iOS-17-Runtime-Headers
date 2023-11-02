
@interface PIPortraitVideoProcessor : CIImageProcessorKernel

+ (void)_configureRGBColorTexture:(id)arg1 format:(int)arg2 isHDR:(bool)arg3;
+ (bool)allowCompressedInputsAndOutputs;
+ (bool)allowPartialOutputRegion;
+ (id)applyWithInputImage:(id)arg1 disparityImage:(id)arg2 inputPixelBuffer:(id)arg3 disparityPixelBuffer:(id)arg4 globalMetadata:(id)arg5 timedMetadata:(id)arg6 aperture:(id)arg7 focusedDisparity:(id)arg8 quality:(id)arg9 debugMode:(id)arg10 isHDR:(bool)arg11 error:(out id*)arg12;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (bool)outputIsOpaque;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)synchronizeInputs;

@end

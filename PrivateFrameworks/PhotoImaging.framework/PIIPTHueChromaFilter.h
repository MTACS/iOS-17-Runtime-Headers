
@interface PIIPTHueChromaFilter : CIFilter

+ (id)convertHueChromaImageToIPT:(id)arg1;
+ (id)convertHueChromaImageToRGB:(id)arg1;
+ (id)convertIPTImageToHueChroma:(id)arg1;
+ (id)convertIPTImageToRGB:(id)arg1;
+ (id)convertRGBImageToHueChroma:(id)arg1;
+ (id)convertRGBImageToIPT:(id)arg1;
+ (id)denormalizeHueChromaImage:(id)arg1;
+ (id)hueChromaKernels;
+ (id)kernelNamed:(id)arg1;
+ (id)normalizeHueChromaImage:(id)arg1;
+ (id)scaleHueKernel;

@end

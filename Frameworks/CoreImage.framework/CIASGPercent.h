
@interface CIASGPercent : CIFilter {
    CIImage * inputImage;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)outputImageScale:(double)arg1 outset:(int)arg2 hKernel:(id)arg3 vKernel:(id)arg4;

@end

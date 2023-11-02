
@interface CIColorClamp : CIFilter {
    CIImage * inputImage;
    CIVector * inputMaxComponents;
    CIVector * inputMinComponents;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputMaxComponents;
@property (nonatomic, retain) CIVector *inputMinComponents;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelAlphaPreserving;
- (id)inputImage;
- (id)inputMaxComponents;
- (id)inputMinComponents;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxComponents:(id)arg1;
- (void)setInputMinComponents:(id)arg1;

@end

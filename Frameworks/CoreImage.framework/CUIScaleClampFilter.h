
@interface CUIScaleClampFilter : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end

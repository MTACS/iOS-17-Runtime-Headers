
@interface CIShadedMaterial : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
    CIImage * inputShadingImage;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) CIImage *inputShadingImage;

+ (id)customAttributes;

- (id)_CIShadedmaterial;
- (id)_CIShadedmaterial_0;
- (id)inputImage;
- (id)inputScale;
- (id)inputShadingImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShadingImage:(id)arg1;

@end

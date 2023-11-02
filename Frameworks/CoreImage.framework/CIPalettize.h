
@interface CIPalettize : CIFilter {
    CIImage * inputImage;
    CIImage * inputPaletteImage;
    NSNumber * inputPerceptual;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputPaletteImage;
@property (nonatomic, retain) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)_kernelApplyPalette;
- (id)inputImage;
- (id)inputPaletteImage;
- (id)inputPerceptual;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputPaletteImage:(id)arg1;
- (void)setInputPerceptual:(id)arg1;

@end

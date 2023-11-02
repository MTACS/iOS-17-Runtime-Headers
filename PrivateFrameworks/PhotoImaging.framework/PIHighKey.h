
@interface PIHighKey : CIFilter {
    CIImage * inputImage;
    NSNumber * inputStrength;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputStrength;

+ (id)kernel;

- (void).cxx_destruct;
- (id)inputImage;
- (id)inputStrength;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;

@end

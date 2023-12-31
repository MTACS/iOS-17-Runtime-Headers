
@interface CIMorphology : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

- (id)inputImage;
- (id)inputRadius;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end

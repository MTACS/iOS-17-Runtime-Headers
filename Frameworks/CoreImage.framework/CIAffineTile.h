
@interface CIAffineTile : CIFilter {
    CIImage * inputImage;
    NSValue * inputTransform;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSValue *inputTransform;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputImage;
- (id)inputTransform;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputTransform:(id)arg1;

@end

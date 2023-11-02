
@interface CIVariableBoxBlur : CIFilter {
    CIImage * inputImage;
    CIImage * inputRadiusImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputRadiusImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputRadiusImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadiusImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end


@interface CIRingBlur : CIFilter {
    CIImage * inputImage;
    NSNumber * inputPointCount;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputPointCount;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputPointCount;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputPointCount:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end


@interface CIOpacity : CIFilter {
    CIImage * inputImage;
    NSNumber * inputOpacity;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOpacity;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputOpacity;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputOpacity:(id)arg1;

@end

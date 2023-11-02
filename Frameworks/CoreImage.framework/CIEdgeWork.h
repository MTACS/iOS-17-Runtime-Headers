
@interface CIEdgeWork : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_CIEdgeWork;
- (id)_CIEdgeWorkContrast;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end

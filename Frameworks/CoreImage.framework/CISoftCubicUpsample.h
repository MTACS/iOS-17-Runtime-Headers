
@interface CISoftCubicUpsample : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (bool)_isIdentity;
- (struct vec2 { union { float x_1_1_1; float x_1_1_2; } x1; union { float x_2_1_1; float x_2_1_2; } x2; })_scale;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end

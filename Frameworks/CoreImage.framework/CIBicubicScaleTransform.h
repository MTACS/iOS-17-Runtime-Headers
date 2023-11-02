
@interface CIBicubicScaleTransform : CIFilter {
    NSNumber * inputAspectRatio;
    NSNumber * inputB;
    NSNumber * inputC;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputAspectRatio;
@property (nonatomic, retain) NSNumber *inputB;
@property (nonatomic, retain) NSNumber *inputC;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (bool)_isIdentity;
- (struct vec2 { union { float x_1_1_1; float x_1_1_2; } x1; union { float x_2_1_1; float x_2_1_2; } x2; })_scale;
- (id)inputAspectRatio;
- (id)inputB;
- (id)inputC;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputAspectRatio:(id)arg1;
- (void)setInputB:(id)arg1;
- (void)setInputC:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end


@interface CIStretch : CIFilter {
    CIImage * inputImage;
    CIVector * inputPoint;
    CIVector * inputSize;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputPoint;
@property (nonatomic, retain) CIVector *inputSize;

+ (id)customAttributes;

- (id)_kernel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeDOD:(struct vec4 { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_3_2_1; struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_3_2_2; } x_1_1_3; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_4_2_1; struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_4_2_2; } x_1_1_4; struct { struct vec3 { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; } x_1_4_1; struct { float x_2_5_1; float x_2_5_2; float x_2_5_3; } x_1_4_2; struct { struct vec2 { union { float x_1_7_1; float x_1_7_2; } x_1_6_1; union { float x_2_7_1; float x_2_7_2; } x_1_6_2; } x_3_5_1; } x_1_4_3; struct { struct vec2 { union { float x_1_7_1; float x_1_7_2; } x_1_6_1; union { float x_2_7_1; float x_2_7_2; } x_1_6_2; } x_4_5_1; } x_1_4_4; } x_1_3_1; } x_5_2_1; } x_1_1_5; } x1; })arg1;
- (id)inputImage;
- (id)inputPoint;
- (id)inputSize;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (void)setInputSize:(id)arg1;

@end


@interface CIMirror : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputImage;
    CIVector * inputPoint;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputPoint;

+ (id)customAttributes;

- (id)_kernel;
- (struct Rectangle { double x1; double x2; double x3; double x4; })computeDOD:(struct vec2 { union { float x_1_1_1; float x_1_1_2; } x1; union { float x_2_1_1; float x_2_1_2; } x2; })arg1 tst:(struct vec3 { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_3_2_1; } x_1_1_3; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_4_2_1; } x_1_1_4; } x1; })arg2 off:(struct vec4 { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_3_2_1; struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_3_2_2; } x_1_1_3; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_4_2_1; struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_4_2_2; } x_1_1_4; struct { struct vec3 { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; } x_1_4_1; struct { float x_2_5_1; float x_2_5_2; float x_2_5_3; } x_1_4_2; struct { struct vec2 { union { float x_1_7_1; float x_1_7_2; } x_1_6_1; union { float x_2_7_1; float x_2_7_2; } x_1_6_2; } x_3_5_1; } x_1_4_3; struct { struct vec2 { union { float x_1_7_1; float x_1_7_2; } x_1_6_1; union { float x_2_7_1; float x_2_7_2; } x_1_6_2; } x_4_5_1; } x_1_4_4; } x_1_3_1; } x_5_2_1; } x_1_1_5; } x1; })arg3 mtx:(struct vec4 { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_3_2_1; struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_3_2_2; } x_1_1_3; struct { struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_4_2_1; struct vec2 { union { float x_1_4_1; float x_1_4_2; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_4_2_2; } x_1_1_4; struct { struct vec3 { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; } x_1_4_1; struct { float x_2_5_1; float x_2_5_2; float x_2_5_3; } x_1_4_2; struct { struct vec2 { union { float x_1_7_1; float x_1_7_2; } x_1_6_1; union { float x_2_7_1; float x_2_7_2; } x_1_6_2; } x_3_5_1; } x_1_4_3; struct { struct vec2 { union { float x_1_7_1; float x_1_7_2; } x_1_6_1; union { float x_2_7_1; float x_2_7_2; } x_1_6_2; } x_4_5_1; } x_1_4_4; } x_1_3_1; } x_5_2_1; } x_1_1_5; } x1; })arg4;
- (id)inputAngle;
- (id)inputImage;
- (id)inputPoint;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;

@end

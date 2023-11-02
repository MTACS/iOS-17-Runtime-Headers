
@interface CIKeystoneCorrection : CIFilter {
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  K;
    CIVector * inputBottomLeft;
    CIVector * inputBottomRight;
    NSNumber * inputFocalLength;
    CIImage * inputImage;
    CIVector * inputTopLeft;
    CIVector * inputTopRight;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  invK;
    float  pitch;
    float  roll;
    float  yaw;
}

@property (nonatomic, copy) CIVector *inputBottomLeft;
@property (nonatomic, copy) CIVector *inputBottomRight;
@property (nonatomic, copy) NSNumber *inputFocalLength;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) CIVector *inputTopLeft;
@property (nonatomic, copy) CIVector *inputTopRight;
@property (nonatomic, readonly) CIFilter *outputRotationFilter;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } outputTransform;

+ (id)customAttributes;

- (id).cxx_construct;
- (void)computeCameraIntrinsics;
- (void)computeRotation;
- (id)inputBottomLeft;
- (id)inputBottomRight;
- (id)inputFocalLength;
- (id)inputImage;
- (id)inputTopLeft;
- (id)inputTopRight;
- (id)outputImage;
- (id)outputRotationFilter;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })outputTransform;
- (void)setInputBottomLeft:(id)arg1;
- (void)setInputBottomRight:(id)arg1;
- (void)setInputFocalLength:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputTopLeft:(id)arg1;
- (void)setInputTopRight:(id)arg1;

@end

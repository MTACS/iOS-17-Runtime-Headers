
@interface CIPerspectiveRotate : CIFilter {
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  K;
    NSNumber * inputFocalLength;
    CIImage * inputImage;
    NSNumber * inputPitch;
    NSNumber * inputRoll;
    NSNumber * inputYaw;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  invK;
}

@property (nonatomic, copy) NSNumber *inputFocalLength;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputPitch;
@property (nonatomic, copy) NSNumber *inputRoll;
@property (nonatomic, copy) NSNumber *inputYaw;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } outputTransform;

+ (id)customAttributes;

- (id).cxx_construct;
- (void)computeCameraIntrinsics;
- (id)inputFocalLength;
- (id)inputImage;
- (id)inputPitch;
- (id)inputRoll;
- (id)inputYaw;
- (id)outputImage;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })outputTransform;
- (void)setInputFocalLength:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPitch:(id)arg1;
- (void)setInputRoll:(id)arg1;
- (void)setInputYaw:(id)arg1;

@end

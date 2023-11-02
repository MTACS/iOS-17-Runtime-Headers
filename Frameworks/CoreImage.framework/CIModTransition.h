
@interface CIModTransition : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    NSNumber * inputCompression;
    CIImage * inputImage;
    NSNumber * inputRadius;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) NSNumber *inputCompression;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) CIImage *inputTargetImage;
@property (nonatomic, retain) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputCompression;
- (id)inputImage;
- (id)inputRadius;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputCompression:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end

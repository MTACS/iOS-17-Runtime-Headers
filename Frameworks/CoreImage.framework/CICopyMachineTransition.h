
@interface CICopyMachineTransition : CIFilter {
    NSNumber * inputAngle;
    CIColor * inputColor;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputOpacity;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOpacity;
@property (nonatomic, retain) CIImage *inputTargetImage;
@property (nonatomic, retain) NSNumber *inputTime;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputColor;
- (id)inputExtent;
- (id)inputImage;
- (id)inputOpacity;
- (id)inputTargetImage;
- (id)inputTime;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOpacity:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end


@interface CIDissolveTransition : CIFilter {
    CIImage * inputImage;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputTargetImage;
@property (nonatomic, retain) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_fadeKernel;
- (id)_kernel;
- (id)inputImage;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end

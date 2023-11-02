
@interface CITemperatureAndTint : CIFilter {
    CIImage * inputImage;
    CIVector * inputNeutral;
    CIVector * inputTargetNeutral;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputNeutral;
@property (nonatomic, retain) CIVector *inputTargetNeutral;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputNeutral;
- (id)inputTargetNeutral;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputNeutral:(id)arg1;
- (void)setInputTargetNeutral:(id)arg1;

@end

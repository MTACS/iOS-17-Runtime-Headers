
@interface CICMYKHalftone : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    NSNumber * inputGCR;
    CIImage * inputImage;
    NSNumber * inputSharpness;
    NSNumber * inputUCR;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) NSNumber *inputGCR;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSharpness;
@property (nonatomic, retain) NSNumber *inputUCR;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_CICMYK_black;
- (id)_CICMYK_convert;
- (id)_CICMYK_cyan;
- (id)_CICMYK_magenta;
- (id)_CICMYK_yellow;
- (id)_CIWhite;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputGCR;
- (id)inputImage;
- (id)inputSharpness;
- (id)inputUCR;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputGCR:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputUCR:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end

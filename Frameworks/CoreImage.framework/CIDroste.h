
@interface CIDroste : CIFilter {
    CIImage * inputImage;
    CIVector * inputInsetPoint0;
    CIVector * inputInsetPoint1;
    NSNumber * inputPeriodicity;
    NSNumber * inputRotation;
    NSNumber * inputStrands;
    NSNumber * inputZoom;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CIDroste;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end

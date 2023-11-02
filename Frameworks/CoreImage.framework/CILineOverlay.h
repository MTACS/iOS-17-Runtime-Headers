
@interface CILineOverlay : CIFilter {
    NSNumber * inputContrast;
    NSNumber * inputEdgeIntensity;
    CIImage * inputImage;
    NSNumber * inputNRNoiseLevel;
    NSNumber * inputNRSharpness;
    NSNumber * inputThreshold;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CIColorControls;
- (id)_CIComicNoiseReduction;
- (id)_CISobelEdges;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end

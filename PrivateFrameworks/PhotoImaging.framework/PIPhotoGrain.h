
@interface PIPhotoGrain : CIFilter {
    NSNumber * _inputAmount;
    CIImage * _inputImage;
    NSNumber * _inputLevel;
    NSNumber * _inputPhase;
}

@property (nonatomic, retain) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputLevel;
@property (nonatomic, retain) NSNumber *inputPhase;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputAmount;
- (id)inputImage;
- (id)inputLevel;
- (id)inputPhase;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLevel:(id)arg1;
- (void)setInputPhase:(id)arg1;

@end

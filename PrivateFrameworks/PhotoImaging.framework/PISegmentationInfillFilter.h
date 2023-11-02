
@interface PISegmentationInfillFilter : CIFilter {
    long long  _infillAlgorithm;
    CIImage * _inputImage;
    CIImage * _inputMatteImage;
}

@property (nonatomic) long long infillAlgorithm;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputMatteImage;

+ (id)blackInfillImage:(id)arg1 matte:(id)arg2;
+ (id)fastInfillImage:(id)arg1 matte:(id)arg2;
+ (id)inpaintingInfillImage:(id)arg1 matte:(id)arg2;
+ (bool)isMLInpaintingAvailable;
+ (id)watchInfillImage:(id)arg1 matte:(id)arg2;

- (void).cxx_destruct;
- (long long)infillAlgorithm;
- (id)inputImage;
- (id)inputMatteImage;
- (id)outputImage;
- (void)setInfillAlgorithm:(long long)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMatteImage:(id)arg1;

@end

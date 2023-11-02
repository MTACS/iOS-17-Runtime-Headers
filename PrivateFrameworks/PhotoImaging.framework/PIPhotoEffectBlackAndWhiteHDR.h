
@interface PIPhotoEffectBlackAndWhiteHDR : CIFilter {
    CIImage * _inputImage;
}

@property (retain) CIImage *inputImage;

+ (id)kernelBlackAndWhite;

- (void).cxx_destruct;
- (id)inputImage;
- (id)outputImage;
- (id)photoEffectName;
- (void)setInputImage:(id)arg1;

@end

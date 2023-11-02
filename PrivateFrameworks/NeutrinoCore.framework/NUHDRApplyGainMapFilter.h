
@interface NUHDRApplyGainMapFilter : CIFilter {
    CIImage * _inputGainMap;
    NSNumber * _inputHeadroom;
    CIImage * _inputImage;
}

@property (nonatomic, retain) CIImage *inputGainMap;
@property (nonatomic, retain) NSNumber *inputHeadroom;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)gainMapLumaToneMappingKernel;

- (void).cxx_destruct;
- (id)inputGainMap;
- (id)inputHeadroom;
- (id)inputImage;
- (id)outputImage;
- (void)setInputGainMap:(id)arg1;
- (void)setInputHeadroom:(id)arg1;
- (void)setInputImage:(id)arg1;

@end

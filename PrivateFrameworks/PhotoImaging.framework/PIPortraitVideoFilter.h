
@interface PIPortraitVideoFilter : CIFilter {
    NSNumber * _inputAperture;
    NUCVPixelBuffer * _inputColorPixelBuffer;
    CIImage * _inputDisparityImage;
    NUCVPixelBuffer * _inputDisparityPixelBuffer;
    NSNumber * _inputFocusedDisparity;
    PTGlobalRenderingMetadata * _inputGlobalRenderingMetadata;
    CIImage * _inputImage;
    bool  _inputIsHDR;
    NSNumber * _inputRenderDebugMode;
    NSNumber * _inputRenderQuality;
    PIPortraitVideoMetadataSample * _inputTimedRenderingMetadata;
}

@property (nonatomic, retain) NSNumber *inputAperture;
@property (nonatomic, retain) NUCVPixelBuffer *inputColorPixelBuffer;
@property (nonatomic, retain) CIImage *inputDisparityImage;
@property (nonatomic, retain) NUCVPixelBuffer *inputDisparityPixelBuffer;
@property (nonatomic, retain) NSNumber *inputFocusedDisparity;
@property (nonatomic, retain) PTGlobalRenderingMetadata *inputGlobalRenderingMetadata;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic) bool inputIsHDR;
@property (nonatomic, retain) NSNumber *inputRenderDebugMode;
@property (nonatomic, retain) NSNumber *inputRenderQuality;
@property (nonatomic, retain) PIPortraitVideoMetadataSample *inputTimedRenderingMetadata;

- (void).cxx_destruct;
- (id)inputAperture;
- (id)inputColorPixelBuffer;
- (id)inputDisparityImage;
- (id)inputDisparityPixelBuffer;
- (id)inputFocusedDisparity;
- (id)inputGlobalRenderingMetadata;
- (id)inputImage;
- (bool)inputIsHDR;
- (id)inputRenderDebugMode;
- (id)inputRenderQuality;
- (id)inputTimedRenderingMetadata;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputColorPixelBuffer:(id)arg1;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputDisparityPixelBuffer:(id)arg1;
- (void)setInputFocusedDisparity:(id)arg1;
- (void)setInputGlobalRenderingMetadata:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIsHDR:(bool)arg1;
- (void)setInputRenderDebugMode:(id)arg1;
- (void)setInputRenderQuality:(id)arg1;
- (void)setInputTimedRenderingMetadata:(id)arg1;

@end

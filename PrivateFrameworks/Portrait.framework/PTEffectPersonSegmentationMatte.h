
@interface PTEffectPersonSegmentationMatte : NSObject {
    <MTLTexture> * _guideRGBACoefficientsSegmentation;
    <MTLTexture> * _guideRGBAUpscaleSegmentation;
    PTGuidedFilter * _guidedFilterSegmentation;
    PTMetalContext * _metalContext;
    PTMSRResize * _msrColorPyramid;
    struct PTEffectPixelBufferDescriptor { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        unsigned int pixelFormatType; 
    }  _outputDescriptor;
    <PTEffectPersonSegmentation> * _personSegmentation;
    PTUtil * _util;
}

+ (struct CGSize { double x1; double x2; })segmentationSizeForColorSize:(struct CGSize { double x1; double x2; })arg1;
+ (unsigned long long)segmentationType;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned int x2; })upscaledSegmentationMatteFormatForColorSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct CGSize { double x1; double x2; })arg2 msrColorPyramid:(id)arg3 cvmNetwork:(id)arg4 effectQuality:(long long)arg5 sharedResources:(id)arg6;
- (int)runPersonSegmentationToOutPersonSegmentationMatteBuffer:(struct __CVBuffer { }*)arg1 inRGBA:(struct __CVBuffer { }*)arg2;

@end

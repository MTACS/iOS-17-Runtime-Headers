
@interface PTSyntheticLight : NSObject {
    PTMetalContext * _asyncMetalContext;
    struct PTSyntheticLightConfig { 
        bool firstFrame; 
        int framesSinceLightEstimate; 
        int lightEstimateFrequency; 
        float emaCoefficient; 
    }  _config;
    NSString * _description;
    PTEffectUtil * _effectUtil;
    PTFaceAttributesNetwork * _faceAttributesNetwork;
    NSArray * _faceObservations;
    float  _lastRelightStrength;
    <MTLComputePipelineState> * _lightEstimation;
    <MTLBuffer> * _lightEstimationBuffer;
    PTMetalContext * _mainMetalContext;
    PTMSRResize * _msrColorPyramid;
    PTPersonSemanticsNetwork * _personSemanticsNetwork;
    <MTLTexture> * _quarterSizeChromaCopy;
    <MTLTexture> * _quarterSizeLumaCopy;
    struct __CVBuffer { } * _rgbaPixelBufferCopy;
    <MTLTexture> * _rgbaTextureCopy;
    <MTLTexture> * _skinMaskRGBA;
    PTSubjectRelighting * _subjectRelighting;
    bool  _subjectRelightingRunning;
    PTUtil * _util;
    NSObject<OS_dispatch_queue> * srlAsyncQueue;
}

+ (void)disableAsynchronousWork;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)debugTextures;
- (void)estimateLightIntensity:(id)arg1 relightStrength:(float)arg2;
- (void)estimateLightIntensityWithFaceRects:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 inTex:(id)arg2 numberOfFaceRects:(int)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 humanDetections:(id)arg5;
- (id)faceObservations;
- (id)initWithMetalContext:(id)arg1 faceAttributesNetwork:(id)arg2 effectUtil:(id)arg3 util:(id)arg4 msrColorPyramid:(id)arg5 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg6 prewarmOnly:(bool)arg7 sharedResources:(id)arg8;
- (void)interpolateLightIntensity:(float)arg1;
- (id)lightEstimation;
- (void)reset;
- (id)srlV2CoeffsBuffer;
- (void)updateSubjectRelighting:(struct __CVBuffer { }*)arg1 inLuma:(id)arg2 inChroma:(id)arg3 inFaceRects:(struct FaceRectsWrapper { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 runOnAsyncCommandQueue:(bool)arg5 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6;

@end

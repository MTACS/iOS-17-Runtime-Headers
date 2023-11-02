
@interface PanoramaParallaxStage : NSObject <MetalImageBufferProcessor> {
    FigMetalContext * _metal;
    NSMutableArray * _preShiftPyramid;
    PanoramaParallaxStageShaders * _shaders;
    <MTLTexture> * _warpedChroma;
    struct __CVBuffer { } * _warpedFrame;
    <MTLTexture> * _warpedLuma;
    <MTLTexture> * _warpedMask;
    NSDictionary * cameraInfoByPortType;
    <MTLCommandQueue> * metalCommandQueue;
    NSDictionary * tuningParameters;
}

@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tuningParameters;
@property struct __CVBuffer { }*warpedFrame;
@property (retain) <MTLTexture> *warpedMask;

- (void).cxx_destruct;
- (int)_allocateShiftPyramidLike:(id)arg1;
- (int)_applyWarpToSlice:(id)arg1 chroma:(id)arg2 mask:(id)arg3 preFlow:(id)arg4 warpedLuma:(id)arg5 warpedChroma:(id)arg6 warpedMask:(id)arg7;
- (int)_buildShiftPyramid;
- (int)_computePreShift:(id)arg1 homography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
- (int)addSlice:(struct __CVBuffer { }*)arg1 mask:(id)arg2 homography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 residualFlow:(struct __CVBuffer { }*)arg4;
- (id)cameraInfoByPortType;
- (void)dealloc;
- (int)finishProcessing;
- (id)initWithContext:(id)arg1;
- (id)metalCommandQueue;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prepareToProcess:(unsigned long long)arg1 sliceHeight:(unsigned long long)arg2;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (void)setCameraInfoByPortType:(id)arg1;
- (int)setDirection:(int)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setTuningParameters:(id)arg1;
- (void)setWarpedFrame:(struct __CVBuffer { }*)arg1;
- (void)setWarpedMask:(id)arg1;
- (int)setup;
- (id)tuningParameters;
- (struct __CVBuffer { }*)warpedFrame;
- (id)warpedMask;

@end

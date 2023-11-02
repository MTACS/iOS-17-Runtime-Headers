
@interface PanoramaStitchingStage : NSObject <MetalImageBufferProcessor> {
    int  _direction;
    bool  _isReadyToProcess;
    FigMetalContext * _metal;
    <MTLTexture> * _motionMask;
    <MTLTexture> * _prevChroma;
    <MTLTexture> * _prevLuma;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roi;
    <MTLTexture> * _seamCost;
    <MTLTexture> * _seamStagingChroma;
    <MTLTexture> * _seamStagingChromaDst;
    <MTLTexture> * _seamStagingLuma;
    <MTLTexture> * _seamStagingLumaDst;
    PanoramaStitchingShaders * _shaders;
    <MTLTexture> * _stitchingMask;
    int  _stitchingMode;
    NSDictionary * cameraInfoByPortType;
    <MTLCommandQueue> * metalCommandQueue;
    NSDictionary * tuningParameters;
}

@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReadyToProcess;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, retain) <MTLTexture> *motionMask;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } roi;
@property (nonatomic, readonly) <MTLTexture> *stitchingMask;
@property (nonatomic) int stitchingMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tuningParameters;

- (void).cxx_destruct;
- (int)_centralStitchAddSlice:(struct __CVBuffer { }*)arg1 sliceHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 sliceType:(int)arg3;
- (int)_seamStitchAddSlice:(struct __CVBuffer { }*)arg1 sliceHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 sliceType:(int)arg3;
- (int)addSlice:(struct __CVBuffer { }*)arg1 sliceHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 sliceType:(int)arg3;
- (id)cameraInfoByPortType;
- (int)finishProcessing;
- (id)initWithContext:(id)arg1;
- (bool)isReadyToProcess;
- (id)metalCommandQueue;
- (id)motionMask;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prepareToProcessSliceWidth:(unsigned long long)arg1 sliceHeight:(unsigned long long)arg2;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roi;
- (void)setCameraInfoByPortType:(id)arg1;
- (int)setDirection:(int)arg1;
- (void)setIsReadyToProcess:(bool)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setMotionMask:(id)arg1;
- (void)setStitchingMode:(int)arg1;
- (void)setTuningParameters:(id)arg1;
- (int)setup;
- (id)stitchingMask;
- (int)stitchingMode;
- (id)tuningParameters;

@end

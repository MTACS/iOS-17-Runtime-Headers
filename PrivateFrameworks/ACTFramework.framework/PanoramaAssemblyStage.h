
@interface PanoramaAssemblyStage : NSObject <MetalImageBufferProcessor> {
    int  _assemblyMode;
    struct { 
        unsigned long long frameWidth; 
        unsigned long long frameHeight; 
        bool enableTranslationCorrection; 
        int movingAverageFilterSize; 
        int referenceMeanStartingFrame; 
        float atlasTranslationShiftLowThreshold; 
        float atlasTranslationShiftHighThreshold; 
        float atlasTranslationCorrectionStrength; 
        int NRFversion; 
    }  _assemblyParams;
    struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } * _atlasHomographies;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    int  _direction;
    NSMutableArray * _dirtyStagingBuffers;
    float  _lastFilteredValue;
    FigMetalContext * _metal;
    float * _movingAverageBuffer;
    <MTLTexture> * _nrfInputChroma;
    <MTLTexture> * _nrfInputLuma;
    struct __CVBuffer { } * _nrfInputPixelBuffer;
    struct opaqueCMSampleBuffer { } * _nrfInputSampleBuffer;
    <MTLTexture> * _nrfOutputChroma;
    <MTLTexture> * _nrfOutputLuma;
    struct __CVBuffer { } * _nrfOutputPixelBuffer;
    NRFProcessor * _nrfProcessor;
    struct __CVBuffer { } * _output;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _outputAtlasHomography;
    <MTLTexture> * _outputBoundChroma;
    <MTLTexture> * _outputBoundLuma;
    <MTLTexture> * _outputMask;
    <MTLTexture> * _projectiveGrid;
    PanoramaAssemblyShaders * _shaders;
    unsigned long long  _sliceBufferAllocSize;
    unsigned long long  _sliceBufferLength;
    unsigned long long  _sliceHeight;
    struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } * _sliceHomographies;
    unsigned long long  _sliceWidth;
    NSMutableArray * _stagingBufferPool;
    unsigned long long  _stagingHeight;
    unsigned long long  _stagingWidth;
    float  _startingMean;
    NSDictionary * cameraInfoByPortType;
    <MTLCommandQueue> * metalCommandQueue;
    NSDictionary * tuningParameters;
}

@property (nonatomic) int assemblyMode;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, retain) NRFProcessor *nrfProcessor;
@property (nonatomic) struct __CVBuffer { }*output;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tuningParameters;

- (void).cxx_destruct;
- (int)_addStagingBuffer;
- (int)_bindOutput;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_stagingHomography;
- (void)addHomogToStaging:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (int)addSlice:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 sliceHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 stitchingMask:(id)arg4 motionCue:(id)arg5 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 sliceType:(int)arg7;
- (int)addSliceToProjectiveGrid:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 atlasHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 panoHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 encoder:(id)arg4 sliceType:(int)arg5;
- (int)addSliceToStagingBuffer:(id)arg1 sliceLuma:(id)arg2 sliceChroma:(id)arg3 sliceMask:(id)arg4 sliceGlobalHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 encoder:(id)arg6;
- (int)addStagingToOutput:(id)arg1;
- (int)assemblyMode;
- (id)cameraInfoByPortType;
- (int)clearStagingBuffer:(id)arg1 withEncoder:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (int)finishProcessing;
- (int)getMaskAsBuffer:(char **)arg1 widthOut:(unsigned long long*)arg2 heightOut:(unsigned long long*)arg3;
- (id)initWithContext:(id)arg1 robustPanoParams:(struct { unsigned long long x1; unsigned long long x2; bool x3; int x4; int x5; float x6; float x7; float x8; int x9; })arg2;
- (id)metalCommandQueue;
- (id)nrfProcessor;
- (struct __CVBuffer { }*)output;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })panoHomography;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prepareToProcessPanoWidth:(unsigned long long)arg1 panoHeight:(unsigned long long)arg2;
- (int)prepareToProcessSliceWidth:(unsigned long long)arg1 sliceHeight:(unsigned long long)arg2 stagingWidth:(unsigned long long)arg3 stagingHeight:(unsigned long long)arg4;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)renderDirtyStagingBuffers;
- (int)resetState;
- (void)setAssemblyMode:(int)arg1;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)setDirection:(int)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setNrfProcessor:(id)arg1;
- (void)setOutput:(struct __CVBuffer { }*)arg1;
- (void)setTuningParameters:(id)arg1;
- (int)setup;
- (id)tuningParameters;

@end


@interface BWNoiseReducerNode : BWNode {
    NSDictionary * _cameraTuningOptions;
    struct NoiseReductionCtx_s { } * _context;
    int  _contextSynchronization;
    int  _gpuPriority;
    NSDictionary * _noiseReductionOptions;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    bool  _processLuma;
    bool  _quadraHighResStillImageCaptureEnabled;
    struct opaqueCMFormatDescription { } * _quadraResampledIntermediaBufferFormatDescription;
    struct __CVBuffer { } * _quadraResampledIntermediateBuffer;
    struct OpaqueVTPixelTransferSession { } * _quadraResampledTransferSession;
    bool  _threaded;
    bool  _useInPlaceAlgorithm;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)quadraHighResStillImageCaptureEnabled;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setQuadraHighResStillImageCaptureEnabled:(bool)arg1;

@end

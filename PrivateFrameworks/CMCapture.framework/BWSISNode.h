
@interface BWSISNode : BWNode {
    bool  _OISSupported;
    NSArray * _afWindowParamsArray;
    bool  _allowAllocationsAtPrepareTime;
    bool  _allowExperimentalOverrides;
    bool  _alwaysRequestsPreBracketedEV0;
    float  _bracketGainCap;
    NSDictionary * _cameraTuningDictionary;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentCaptureSettings;
    NSArray * _exposureValues;
    NSDictionary * _fusionParamsDictionary;
    int  _fusionScheme;
    int  _lastFusionTypeUsed;
    int  _lensShadingCorrectionMode;
    bool  _livePhotoSupported;
    int  _maxIntegrationTimeLimitMsec;
    NSDictionary * _noiseModelParamsDictionary;
    int  _numberFramesReceived;
    int  _oisBracketCount;
    NSArray * _oisExposureDurationTypes;
    bool  _preBracketedFrameReceived;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sensorIDDictionary;
    int  _sisBracketCount;
}

+ (void)initialize;

- (bool)OISSupported;
- (id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(int (*)arg3 fusionScheme:(int)arg4 allowExperimentalOverrides:(bool)arg5;
- (bool)allowAllocationsAtPrepareTime;
- (bool)alwaysRequestsPreBracketedEV0;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3;
- (bool)livePhotoSupported;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAllowAllocationsAtPrepareTime:(bool)arg1;
- (void)setAlwaysRequestsPreBracketedEV0:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setLivePhotoSupported:(bool)arg1;
- (void)setOISSupported:(bool)arg1;

@end

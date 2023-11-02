
@interface BWStillImagePortraitMetadataNode : BWNode {
    NSString * _currentPortType;
    float  _currentZoomFactorForSDOFRenderingParameters;
    NSString * _defaultPortType;
    float  _defaultZoomFactor;
    NSDictionary * _sdofRenderingParameters;
    FigSDOFRenderingTuningParameters * _sdofRenderingTuningParameters;
    Class  _sdofRenderingTuningParametersClass;
    int  _sdofRenderingVersion;
    NSDictionary * _sensorConfigurationsByPortType;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 sdofRenderingVersion:(int)arg2 sensorConfigurationsByPortType:(id)arg3 defaultPortType:(id)arg4 defaultZoomFactor:(float)arg5;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end

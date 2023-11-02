
@interface BWMeteorHeadroomNode : BWNode {
    float  _gainMapMainImageDownscalingFactor;
    int  _headroomProcessingType;
    FigMetalHistogram * _histogram;
    NSString * _lastCaptureRequestIdentifier;
    float  _lastMeteorHeadroom;
    FigMetalContext * _metalContext;
    NSDictionary * _meteorHeadroomParametersByPortType;
}

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (float)gainMapMainImageDownscalingFactor;
- (int)headroomProcessingType;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setGainMapMainImageDownscalingFactor:(float)arg1;
- (void)setHeadroomProcessingType:(int)arg1;

@end

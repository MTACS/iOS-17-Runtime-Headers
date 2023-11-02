
@interface BWVISOverscanPredictionNode : BWNode {
    NSDictionary * _cameraInfoByPortType;
    <BWVISOverscanPredictionDelegate> * _delegate;
    GVSOverscanPredictor * _visOverscanPredictor;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraInfoByPortType:(id)arg1 delegate:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end

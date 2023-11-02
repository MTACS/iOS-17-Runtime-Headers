
@interface BWRedEyeReducerNode : BWNode {
    CIContext * _ciContext;
    NSString * _inferenceAttachmentKey;
    int  _inferenceType;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    struct opaqueCMSampleBuffer { } * _primaryImageSampleBuffer;
    NSDictionary * _redEyeReductionParametersByPortType;
    int  _redEyeReductionVersion;
    CIDualRedEyeRepairSession * _redEyeRepairSession;
    bool  _skipRepair;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)inferenceAttachmentKey;
- (int)inferenceType;
- (id)initWithVersion:(int)arg1 sensorConfigurationsByPortType:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setInferenceAttachmentKey:(id)arg1;
- (void)setInferenceType:(int)arg1;

@end

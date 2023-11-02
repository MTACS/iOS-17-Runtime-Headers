
@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {
    NSArray * _baseZoomFactors;
    long long  _currentSettingsID;
    struct opaqueCMSampleBuffer { } * _narrowerFOVBuffer;
    BWNodeError * _narrowerFOVError;
    BWNodeInput * _narrowerFOVInput;
    BWNodeOutput * _narrowerFOVOutput;
    struct opaqueCMSampleBuffer { } * _widerFOVBuffer;
    BWNodeError * _widerFOVError;
    BWNodeInput * _widerFOVInput;
    BWNodeOutput * _widerFOVOutput;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithBaseZoomFactors:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end

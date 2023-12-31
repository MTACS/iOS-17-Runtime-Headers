
@interface BWStillImageTimeMachineFrameCoordinatorNode : BWNode {
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    NSMutableDictionary * _portTypeToFrameCounts;
    NSDictionary * _portTypeToInput;
    NSDictionary * _portTypeToOutput;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithPortTypes:(id)arg1;
- (id)inputForPortType:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputForPortType:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end

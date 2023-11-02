
@interface BWGNRNode : BWNode {
    bool  _allowedToModifyInputBuffers;
    BWNodeOutput * _bravoHDRDisparityOutput;
    bool  _clientExpectsPreBracketFrame;
    struct opaqueCMSampleBuffer { } * _collectedUnprocessedPreBracketHDR;
    int (* _createSampleBufferProcessorFunction;
    BWStillImageSettings * _currentStillImageSettings;
    unsigned int  _expectedFrameCount;
    bool  _expectsPreBracketFrame;
    int  _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    int  _hdrDisparityBracketedCaptureSequenceNumber;
    int  _hdrEV0BracketCaptureIdentifier;
    bool  _hdrEnabled;
    NSMutableDictionary * _inputAttachedMedia;
    bool  _oisEnabled;
    NSString * _portType;
    long long  _previouslyCompletedFusionSettingsID;
    bool  _processingHDREV0BracketFrame;
    bool  _processingLTMHDRFusion;
    int  _processingType;
    bool  _receivedAllFrames;
    unsigned int  _receivedFrameCount;
    bool  _receivedPreBracketFrame;
    int  _receivedReferenceFrameBracketedCaptureSequenceNumber;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSString * _sensorID;
    NSDictionary * _sensorIDDictionary;
    bool  _sisEnabled;
    FigCapturePixelConverter * _stereoFusedGNRHDRPixelConverter;
    NSString * _telephotoPortType;
    NSString * _telephotoSensorID;
    NSDictionary * _telephotoSensorIDDictionary;
    bool  _usesHDRPreBracketFrameForErrorRecoveryDownstream;
}

+ (void)initialize;

- (id)_initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 LTMHDREnabled:(bool)arg3 processingLTMHDRFusion:(bool)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10 sbpCreationFunction:(int (*)arg11 treatSoftErrorsAsHardErrors:(bool)arg12;
- (bool)allowedToModifyInputBuffers;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 LTMHDREnabled:(bool)arg3 processingLTMHDRFusion:(bool)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAllowedToModifyInputBuffers:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(bool)arg1;
- (bool)usesHDRPreBracketFrameForErrorRecoveryDownstream;

@end

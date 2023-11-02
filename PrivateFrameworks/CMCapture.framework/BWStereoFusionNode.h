
@interface BWStereoFusionNode : BWNode {
    NSDictionary * _cameraInfoByPortType;
    int (* _createSampleBufferProcessorFunction;
    BWStillImageSettings * _currentStillImageSettings;
    BWNodeOutput * _defaultOutput;
    bool  _expectsTelephotoFrame;
    bool  _expectsWideFrame;
    BWNodeInput * _masterInput;
    NSMutableArray * _nodeErrorsForTelephoto;
    NSMutableArray * _nodeErrorsForWide;
    bool  _performSBPProcessing;
    bool  _receivedTelephotoFrame;
    bool  _receivedWideFrame;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sbpZoomRectangleDictionary;
    BWNodeOutput * _stereoHDROutput;
    BWNodeInput * _telephotoInput;
    NSDictionary * _telephotoSensorIDDictionary;
    BWNodeInput * _wideInput;
}

@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *stereoHDROutput;
@property (nonatomic, readonly) BWNodeInput *telephotoInput;
@property (nonatomic, readonly) BWNodeInput *wideInput;

+ (void)initialize;

- (id)_initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 sbpCreationFunction:(int (*)arg3 treatSoftErrorsAsHardErrors:(bool)arg4;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)defaultOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2;
- (bool)isCaptureRequestStateReset;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (struct OpaqueFigSampleBufferProcessor { }*)sampleBufferProcessor;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (id)stereoHDROutput;
- (id)telephotoInput;
- (id)wideInput;

@end

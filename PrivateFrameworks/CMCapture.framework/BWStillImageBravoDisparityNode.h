
@interface BWStillImageBravoDisparityNode : BWNode {
    BWStillImageSettings * _currentStillImageSettings;
    int  _deliveredDisparityCount;
    struct opaqueCMFormatDescription { } * _disparityFormatDescription;
    FigDisparityGenerator * _disparityGenerator;
    bool  _disparityInputIsRaw;
    unsigned long long  _disparityMapHeight;
    unsigned long long  _disparityMapWidth;
    bool  _emitTeleFrame;
    bool  _emitWideFrame;
    BWNodeError * _errorForTele;
    BWNodeError * _errorForWide;
    int  _expectedDisparityCount;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    int  _processingMode;
    NSDictionary * _sensorConfigurationsByPortType;
    bool  _shouldComputeDisparityWhenCalibrationFails;
    struct opaqueCMSampleBuffer { } * _teleSbuf;
    BWNodeInput * _telephotoInput;
    BWNodeInput * _wideInput;
    struct opaqueCMSampleBuffer { } * _wideSbuf;
}

@property (nonatomic, readonly) BWNodeInput *telephotoInput;
@property (nonatomic, readonly) BWNodeInput *wideInput;

+ (void)initialize;

- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 outputDisparityBufferCount:(int)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setShouldComputeDisparityWhenCalibrationFails:(bool)arg1;
- (bool)shouldComputeDisparityWhenCalibrationFails;
- (id)telephotoInput;
- (id)wideInput;

@end
